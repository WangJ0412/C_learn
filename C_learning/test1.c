#include "static.h"
//编译时：文本代码->可执行程序（二进制文件）->双击启动改程序
//生成可执行程序并运行 
int g_val = 100;
int main()
{
	int a=0;
	printf("%d\n", a);
	test();
	printf("main:%d\n", g_val);
	printf("hello world!\n");
	system("pause");
	return 0;


}
