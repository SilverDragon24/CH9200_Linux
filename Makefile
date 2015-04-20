# This makefile for CH9X00 network adaptor

# Makefile for linux 2.6.x - 3.8.x

ifneq ($(KERNELRELEASE), )
#call from kernel build system
obj-m := ch9x00.o
else
KERNELDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD)

load:
	modprobe mii
	modprobe usbnet
	insmod ch9x00.ko

unload:
	rmmod ch9x00

clean:
	rm -rf *.o *~ core .depend .*.cmd *.mod.c .tmp_versions modules.* Module*
endif
