//#include <stdio.h>
//
//int main()
//{
//	int  var = 20;   /* ʵ�ʱ��������� */
//	int* ip;        /* ָ����������� */
//
//	ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
//
//	printf("var �����ĵ�ַ: %p\n", &var);
//
//	/* ��ָ������д洢�ĵ�ַ */
//	printf("ip �����洢�ĵ�ַ: %p\n", ip);
//
//	/* ʹ��ָ�����ֵ */
//	printf("*ip ������ֵ: %d\n", *ip);
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
//	/* ָ���е�һ��Ԫ�صĵ�ַ */
//	ptr = var;
//	i = 0;
//	while (ptr <= &var[MAX - 1])
//	{
//
//		printf("�洢��ַ��var[%d] = %p\n", i, ptr);
//		printf("�洢ֵ��var[%d] = %d\n", i, *ptr);
//
//		/* ָ����һ��λ�� */
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
        ptr[i] = &var[i]; /* ��ֵΪ�����ĵ�ַ */
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}