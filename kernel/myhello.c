#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/syscalls.h>
#include<linux/linkage.h>


asmlinkage int sys_myhello(void)
{
	printk("My myhello system call working !!!!");
	return 0;

}
