#include <stdio.h>

void SimpleFuncOne(int ptr1[],int ptr2[])
{
	for (int i = 0; i < 3 ; i++)
		printf("%d ", (*ptr1)+ i);

	printf("\n");
	for (int i = 0; i <4; i++)
		printf("%d ", (*ptr2) + i);
}

void SimpleFuncTwo(int (*ptr1)[4],int(*ptr2)[4])
{

}

int main()
{
	/*int a[3][2] = { {1,2},{3,4},{5,6} };

	printf("a[0]: %p \n", a[0]);
	printf("*(a+0): %p \n", *(a + 0));

	printf("a[1]: %p \n", a[1]);
	printf("*(a+1): %p \n", *(a + 1));

	printf("a[2]: %p \n", a[2]);
	printf("*(a+2): %p \n", *(a + 2));

	printf("%d, %d \n", a[2][1], (*(a + 2))[1]);
	printf("%d, %d \n", a[2][1],*(a[2]+1));
	printf("%d, %d \n", a[2][1], *(*(a + 2) + 1));*/

	/*int Ar[5] = { 1,2,3,4,5 };
	int Ar2[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int* arr1[5];
	int* arr2[3][5];
	


	int** dptr = arr1;
	int* (*dptr)[5] = arr2;*/

	int arr1[3] = { 1,2,3 };
	int arr2[4] = { 4,5,6,7 };
	SimpleFuncOne(arr1, arr2);

	int arr3[3][4];
	int arr4[2][4];


	return 0;
}