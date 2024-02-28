//#include <stdio.h>
//
//int main()
//{
//	int  var = 20;   /* 实际变量的声明 */
//	int* ip;        /* 指针变量的声明 */
//
//	ip = &var;  /* 在指针变量中存储 var 的地址 */
//
//	printf("var 变量的地址: %p\n", &var);
//
//	/* 在指针变量中存储的地址 */
//	printf("ip 变量存储的地址: %p\n", ip);
//
//	/* 使用指针访问值 */
//	printf("*ip 变量的值: %d\n", *ip);
//
//	return 0;
//}


//#include <stdio.h>
//
//const int MAX = 3;
//
//int main()
//{
//	int  var[] = { 10, 100, 200 };
//	int  i, * ptr;
//
//	/* 指针中第一个元素的地址 */
//	ptr = var;
//	i = 0;
//	while (ptr <= &var[MAX - 1])
//	{
//
//		printf("存储地址：var[%d] = %p\n", i, ptr);
//		printf("存储值：var[%d] = %d\n", i, *ptr);
//
//		/* 指向上一个位置 */
//		ptr++;
//		i++;
//	}
//	return 0;
//}
#include <stdio.h>

const int MAX=3;

int main()
{
    int  var[] = { 10, 100, 200 };
    int i, * ptr[MAX];

    for (i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; /* 赋值为整数的地址 */
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}