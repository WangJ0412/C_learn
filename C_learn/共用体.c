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
// ������ռ�õ��ڴ�Ӧ�㹻�洢�����������ĳ�Ա��
// ���磬�������ʵ���У�Data ��ռ�� 20 ���ֽڵ��ڴ�ռ䣬��Ϊ�ڸ�����Ա�У��ַ�����ռ�õĿռ������ġ�
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
//��������ǿ��Կ���������� i �� f ��Ա��ֵ���𻵣���Ϊ��󸳸�������ֵռ�����ڴ�λ�ã���Ҳ�� str ��Ա�ܹ���������ԭ��

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
//��������еĳ�Ա��������������Ϊͬһʱ��ֻ�õ�һ����Ա��
