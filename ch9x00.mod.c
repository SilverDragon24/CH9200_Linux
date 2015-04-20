#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4c46c04, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9db52940, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x49589841, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x45db8903, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xbb849c5f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x1477c327, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7486b5d6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfbc242e, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xa13139ef, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f4fe9b1, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2c3615b1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe80414a2, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd89b30e4, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x976a9df5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x117f8420, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7149fc2a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbb323702, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x47123fd5, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x96d9abcd, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x344ba477, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x5fc687a9, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7b575380, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x44c4a799, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x67fa293f, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x66c20c66, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x75a89228, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x1205ad85, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xa177efc4, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v1A86pE091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p8339d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "44C147B96247EFCF9379D6C");
