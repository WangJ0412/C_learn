#include "static.h"
//����ʱ���ı�����->��ִ�г��򣨶������ļ���->˫�������ĳ���
//���ɿ�ִ�г������� 
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
