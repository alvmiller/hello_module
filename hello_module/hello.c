#include <linux/init.h>
#include <linux/module.h>

// https://faun.pub/building-the-simple-kernel-module-from-linux-device-drivers-on-arch-linux-9a8374a502a3

// https://devarea.com/linux-kernel-development-and-writing-a-simple-kernel-module/
// https://blog.sourcerer.io/writing-a-simple-linux-kernel-module-d9dc3762c234

// sudo apt-get install build-essential linux-headers-`uname -r`
// make
// moduleinfo hello.ko
// sudo insmod ./hello.ko
// sudo dmesg
// lsmod | grep hello
// sudo rmmod hello
// make test

//MODULE_LICENSE("Dual BSD/GPL");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("user1");
MODULE_DESCRIPTION("kernel-test-01");
MODULE_VERSION("0.001");

static int __init hello_init(void)
{
    printk(KERN_ALERT "Hello\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_ALERT "Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);