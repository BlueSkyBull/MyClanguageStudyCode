#include <stdio.h>

void ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", *(param + i));
	printf("\n");
}

void AddArayElem(int* param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		*(param + i) += add;
}

void Swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}


int main()
{
	/*int arr[3] = { 1,2,3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));*/

	//int num1 = 10;
	//int num2 = 20;

	//printf("num1 num2: %d %d \n", num1, num2);
	//Swap(&num1, &num2);
	//printf("num1 num2: %d %d \n", num1, num2);


	return 0;
}