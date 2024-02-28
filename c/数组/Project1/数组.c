#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size = 5;
	int* dynamicArray = (int*)malloc(size * sizeof(int)); // ��̬�����ڴ����

	if (dynamicArray == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	printf("Enter %d elements: ", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &dynamicArray[i]);
	}

	printf("Dynamic Array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", dynamicArray[i]);
	}
	printf("\n");

	free(dynamicArray); // ��̬�����ڴ��ͷ�

	return 0;
}