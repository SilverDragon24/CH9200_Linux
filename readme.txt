Note:
	1. Please run as root
	2. Supported linux kernel range from 2.6.x to 3.8.x
	3. CH9x00 module depends on mii and usbnet modules
	4. If you want complied this module in kernel, refer to followed
		a. # cp ch9x00.c ~/2.6.25/driver/net/usb/
		b. # cd ~/2.6.25/driver/net/usb/
		c. modified Makefile and Kconfig for ch9x00.c

Install:
	# make
	# make load

Uninstall:
	# make unload

