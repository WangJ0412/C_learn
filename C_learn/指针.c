#include <stdio.h>

int main()
{
    int  V;
    int* Pt1;
    int** Pt2;

    V = 100;

    /* ��ȡ V �ĵ�ַ */
    Pt1 = &V;

    /* ʹ������� & ��ȡ Pt1 �ĵ�ַ */
    Pt2 = &Pt1;

    /* ʹ�� pptr ��ȡֵ */
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
///* Ҫ���ɺͷ���������ĺ��� */
//int* getRandom()
//{
//    static int  r[10];
//    int i;
//
//    /* �������� */
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
///* Ҫ�������涨�庯���������� */
//int main()
//{
//    /* һ��ָ��������ָ�� */
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