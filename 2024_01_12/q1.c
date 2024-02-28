#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	int a= -20;
	unsigned int b = 10;
	printf("%d\n", a + b);
	printf("%u\n", a + b);


	//code1
	//char a[1000];
	//for (int i = 0; i < 1000; i++){
	//	a[i] = -1 - i;
	//}
	//printf("%d\n", strlen(a));

	system("pause");
	return 0;
}