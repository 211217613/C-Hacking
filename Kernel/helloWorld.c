/*  
	/usr/src/linux-headers-2.6.32-21-generic/include/linux 
*/
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/kobject.h>

MODULE_LICENSE("GPL");

#define START_CHECK 0XC0000000
#define END_CHECK 0xD0000000


typedef unsigned int psize;

static int in_module(void){
	/* Kernel Module hiding*/
	// list_del_init(&__this_module.list); // hide from lsmod:/proc/modules
	// kobject_del(&THIS_MODULE->mkobj.kobj); //hide from /sys/module
	
	printk("Hacking: module loaded\n");
	return 0;		
}

static void out_module(void){
	printk("Hacking: module removed\n");
}

module_init(in_module);
module_exit(out_module);