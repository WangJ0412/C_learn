#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//union Data
//{
//	int i;
//	float f;
//	char  str[20];
//};
//
//int main()
//{
//	union Data data;
//
//	printf("Memory size occupied by data : %d\n", sizeof(data));
//
//	return 0;
//}
// 共用体占用的内存应足够存储共用体中最大的成员。
// 例如，在上面的实例中，Data 将占用 20 个字节的内存空间，因为在各个成员中，字符串所占用的空间是最大的。
//#include <stdio.h>
//#include <string.h>
//
//union Data
//{
//	int i;
//	float f;
//	char  str[20];
//};
//
//int main()
//{
//	union Data data;
//
//	data.i = 10;
//	data.f = 220.5;
//	strcpy(data.str, "C Programming");
//
//	printf("data.i : %d\n", data.i);
//	printf("data.f : %f\n", data.f);
//	printf("data.str : %s\n", data.str);
//
//	return 0;
//}
//在这里，我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因。

#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char  str[20];
};

int main()
{
	union Data data;

	data.i = 10;
	printf("data.i : %d\n", data.i);

	data.f = 220.5;
	printf("data.f : %f\n", data.f);

	strcpy(data.str, "C Programming");
	printf("data.str : %s\n", data.str);

	return 0;
}
//在这里，所有的成员都能完好输出，因为同一时间只用到一个成员。
