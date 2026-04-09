#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LinkWu");
MODULE_DESCRIPTION("sky zone");

static int __init sky_zone_init() { return 0; }

static void __exit sky_zone_exit() {}

module_init(sky_zone_init);
module_exit(sky_zone_exit);
