#include <stdio.h>

int main()
{
    int  V;
    int* Pt1;
    int** Pt2;

    V = 100;

    /* 获取 V 的地址 */
    Pt1 = &V;

    /* 使用运算符 & 获取 Pt1 的地址 */
    Pt2 = &Pt1;

    /* 使用 pptr 获取值 */
    printf("var = %d\n", V);
    printf("Pt1 = %p\n", Pt1);
    printf("*Pt1 = %d\n", *Pt1);
    printf("Pt2 = %p\n", Pt2);
    printf("**Pt2 = %d\n", **Pt2);

    return 0;
}
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h> 
//
///* 要生成和返回随机数的函数 */
//int* getRandom()
//{
//    static int  r[10];
//    int i;
//
//    /* 设置种子 */
//    srand((unsigned)time(NULL));
//    for (i = 0; i < 10; ++i)
//    {
//        r[i] = rand();
//        printf("%d\n", r[i]);
//    }
//
//    return r;
//}
//
///* 要调用上面定义函数的主函数 */
//int main()
//{
//    /* 一个指向整数的指针 */
//    int* p;
//    int i;
//
//    p = getRandom();
//    for (i = 0; i < 10; i++)
//    {
//        printf("*(p + [%d]) : %d\n", i, *(p + i));
//    }
//
//    return 0;
//}