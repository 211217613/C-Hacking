#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/symtab_begin.h>

MODULE_LICENSE("GPL");


static inline void __list_delete(struct list_head * prev, struct list_head * next){
	next->prev = prev;
	prev->next = next;
}


int in_module(void){
	register_symtab(NULL);
	printk("Hacking: module loaded\n");
	printk("%d\n", i386);
	return 0;
}

void out_module(void){
	printk("Hacking: module removed\n");
}

module_init(in_module);
module_exit(out_module);
