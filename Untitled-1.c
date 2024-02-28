#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int x = 10;         // 整型变量 x 初始化为 10
   float pi = 3.14;    // 浮点型变量 pi 初始化为 3.14
   char ch = 'A';      // 字符型变量 ch 初始化为字符 'A'
   extern int d = 3, f = 5;    // d 和 f 的声明与初始化
   int d = 3, f = 5;           // 定义并初始化 d 和 f
   byte z = 22;                // 定义并初始化 z

   /* 我的第一个 C 程序 */
   printf("Hello, World! \n");
   printf("你好，世界！ \n");
   system("pause");            //防止运行后自动退出，需要头文件stdlib.h
   return 0;
}