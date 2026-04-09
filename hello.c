#include "linux/stat.h"
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("LinkWu");
MODULE_DESCRIPTION("a sample mod");

static int age = 40;
module_param(age, int, S_IRUSR);
MODULE_PARM_DESC(age, "my age");

static int ids[8] = {
    0,
};
static int ids_len = 0;
module_param_array(ids, int, &ids_len, S_IRUSR);
MODULE_PARM_DESC(ids, "my ids");

static int __init hello_init() {
    pr_info("hello, mod %d\n", age);
    for (int i = 0; i < ids_len; ++i) {
        pr_info("id %d: %d", i, ids[i]);
    }
    return 0;
}

static void __exit hello_exit() { pr_info("bye, mod\n"); }

module_init(hello_init);
module_exit(hello_exit);
