#include <linux/kernel.h>

asmlinkage long sys_hello(void)
{
	printk("HJP845HJP systemcall!\n");
	return 0;
}
