#include <stdio.h>
#include <windows.h> //windows.h系统头文件，仅仅是为了停屏
//文本代码->可执行程序（二进制文件）->双击启动该程序
int main()
{
	printf("hello world!\n");
	system("pause"); //pause停屏，暂时不讲，会用就行
	return 0;
}
//运行程序的方式，当然可以用vs直接启动
//当然，也可以在vs项目中，找到代码生成的二进制可执行程序，双击即可。
//所以：我们的角色是写代码，编译器的角色是把文本代码变成二进制可执行程序。
//双击？不就是windows下启动程序的做法吗？
//那么启动程序的本质是什么呢？将程序数据，加载到内存中，让计算机运行！
//那么为什么要加载到内存中呢？这个C语句期间不讲，后面有机会再说。