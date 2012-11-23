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
	{ 0x9e03639, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x4d9420fa, "kmem_cache_destroy" },
	{ 0x867f7d04, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xab455eb0, "up_read" },
	{ 0xf629195c, "clk_enable" },
	{ 0xd34811ee, "pci_release_region" },
	{ 0x3dec0827, "mem_map" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xd8f795ca, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xe5c361b5, "__alloc_workqueue_key" },
	{ 0xe339e530, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x253226b4, "pci_disable_device" },
	{ 0x70dd04ba, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x170ec140, "seq_printf" },
	{ 0xc8a1767d, "remove_proc_entry" },
	{ 0x97ad189a, "device_destroy" },
	{ 0x938917cf, "queue_work" },
	{ 0xeebd13c, "__register_chrdev" },
	{ 0x74c86cc0, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x128a72d1, "clk_get_rate" },
	{ 0x9a1b9fe7, "seq_read" },
	{ 0x59006310, "__alloc_pages_nodemask" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0xbf1faebe, "mutex_trylock" },
	{ 0xc6d533e1, "down_read" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x15ec2224, "pci_set_master" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0xa4610bc6, "omap_rev" },
	{ 0xb4689dc9, "proc_mkdir" },
	{ 0x9c7e7601, "pci_restore_state" },
	{ 0x48a0f939, "mutex_lock_interruptible" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x328a05f1, "strncpy" },
	{ 0x30824632, "kmem_cache_free" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x46e3ab51, "destroy_workqueue" },
	{ 0xb3efc72d, "down" },
	{ 0x9b98d1c5, "device_create" },
	{ 0x9a6221c5, "mod_timer" },
	{ 0x2bfff013, "platform_device_unregister" },
	{ 0x8cfc414e, "add_timer" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0xba540b82, "platform_driver_register" },
	{ 0x465f1e02, "flush_workqueue" },
	{ 0x1ebe6d5e, "contig_page_data" },
	{ 0xa4418177, "pci_clear_master" },
	{ 0x2817e84d, "vm_insert_page" },
	{ 0xdb902d80, "find_vma" },
	{ 0x7dceceac, "capable" },
	{ 0xe8929aa8, "kmem_cache_alloc" },
	{ 0x1f23db4b, "__free_pages" },
	{ 0xfbf689ea, "platform_device_register" },
	{ 0xc5a05dac, "get_user_pages" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xe9ce8b95, "omap_ioremap" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x15331242, "omap_iounmap" },
	{ 0xc27487dd, "__bug" },
	{ 0x4f158bf1, "create_proc_entry" },
	{ 0xad83a8d, "clk_get" },
	{ 0x8d3bf5ae, "kmem_cache_create" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x425456c9, "cpu_cache" },
	{ 0x864da290, "pci_set_power_state" },
	{ 0x75353821, "vm_insert_mixed" },
	{ 0xa8980339, "seq_lseek" },
	{ 0x26477c07, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0xf8fd3dac, "pci_disable_msi" },
	{ 0x8cf51d15, "up" },
	{ 0x7718373, "put_page" },
	{ 0xb03e36e0, "class_destroy" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0x8f66a5d4, "pci_get_device" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x75895072, "pci_enable_msi_block" },
	{ 0x9d4fcb2a, "pci_choose_state" },
	{ 0xa0fc61d0, "seq_release" },
	{ 0xcf88e363, "vmalloc_to_page" },
	{ 0x1f1e12ae, "platform_driver_unregister" },
	{ 0x229f31cc, "pci_enable_device" },
	{ 0x543712b0, "__class_create" },
	{ 0x8a2e799f, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x639a7e8a, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
