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
	{ 0x796a78cc, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe90dcae0, "__request_module" },
	{ 0xca6f785b, "device_remove_file" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xcff53400, "kref_put" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x898bdd44, "sysfs_remove_bin_file" },
	{ 0x477017ed, "debugfs_create_dir" },
	{ 0xf8d71edb, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x180d3338, "single_open" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xf1ac0ceb, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xaf79e196, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x59662dcc, "send_sig" },
	{ 0x241895d, "single_release" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x138839a, "i2c_transfer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc9ceb3e4, "seq_printf" },
	{ 0x7b541377, "remove_proc_entry" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x658b0248, "__register_chrdev" },
	{ 0x6f439375, "init_timer_key" },
	{ 0xf414666f, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa2487e0, "unblock_all_signals" },
	{ 0xff964b25, "param_set_int" },
	{ 0xe95454da, "debugfs_create_file" },
	{ 0xc45ef616, "idr_for_each" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x28ce70b0, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0xda1a7335, "kasprintf" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x407136b1, "__put_user_8" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x55636647, "proc_mkdir" },
	{ 0x302c48b, "idr_destroy" },
	{ 0xc8ab11a8, "device_register" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x8f786f7f, "__mutex_init" },
	{ 0xea147363, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x328a05f1, "strncpy" },
	{ 0x66925ec9, "fasync_helper" },
	{ 0x10f8fe86, "dma_free_coherent" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9a0197e7, "debugfs_remove" },
	{ 0x8e3c9cc3, "vprintk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xacf74b0a, "mutex_lock" },
	{ 0xcf7e3fd8, "class_remove_file" },
	{ 0xf4d06ed6, "mod_timer" },
	{ 0x1d20873c, "dma_cache_maint_page" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0xcf76677c, "class_create_file" },
	{ 0xbe71362d, "i2c_unregister_device" },
	{ 0xadb3d81e, "up_write" },
	{ 0xb1b22911, "down_write" },
	{ 0xca627843, "fput" },
	{ 0x2a3247fc, "shmem_file_setup" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xeecd9709, "kobject_uevent_env" },
	{ 0x6c26b90f, "dma_alloc_coherent" },
	{ 0x80de231a, "idr_remove" },
	{ 0x6ce3562c, "do_mmap_pgoff" },
	{ 0xecb3523a, "device_create_file" },
	{ 0x221dfde0, "idr_pre_get" },
	{ 0xc39501de, "module_put" },
	{ 0x7dceceac, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x813ed040, "idr_remove_all" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x1000e51, "schedule" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xe9ce8b95, "omap_ioremap" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x15331242, "omap_iounmap" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x82dd1188, "dev_driver_string" },
	{ 0x4b34fbf5, "block_all_signals" },
	{ 0xc2e058a4, "idr_get_new_above" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x7fe0d2fe, "proc_create_data" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0x7ca067f7, "seq_lseek" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x442b2afb, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8a1203a9, "kref_get" },
	{ 0x3c71881, "sysfs_create_bin_file" },
	{ 0xe87ed1ce, "idr_replace" },
	{ 0x36916f12, "class_destroy" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x74672c19, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x82e5a238, "vm_get_page_prot" },
	{ 0xb95f98d6, "_memset_io" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x8c08ed8e, "vmalloc_to_page" },
	{ 0x71b6ef76, "dev_set_name" },
	{ 0x4347b971, "idr_init" },
	{ 0xb81fd3be, "idr_find" },
	{ 0xdaee8348, "__class_create" },
	{ 0x7f910470, "i2c_new_device" },
	{ 0xb859f38b, "krealloc" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "66C9BC056D7D95536BBFC6B");
