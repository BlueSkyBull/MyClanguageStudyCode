#include <stdio.h>

//int SquareByValue(int num)
//{
//	return num * num;
//}

//void SquareByReference(int *ptr)
//{
//	*ptr = *ptr * *ptr;
//}

//void Swap3(int* ptr1, int* ptr2, int* ptr3)
//{
//	int temp1, temp2;
//	temp1 = *ptr1;
//	temp2 = *ptr2;
//	*ptr1 = *ptr3;
//	*ptr2 = temp1;
//	*ptr3 = temp2;
//
//}


void Even(int ptr[], int len)
{
	printf("짝수 출력: ");
	for (int i = 0; i < len; i++)
	{
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}
	printf("\n");
}

void Odd(int ptr[], int len)
{
	printf("홀수 출력: ");
	for (int i = 0; i < len; i++)
	{
		if (ptr[i] % 2 == 1)
			printf("%d ", ptr[i]);
	}
	printf("\n");
}


void ShowArr2DStyle(int(*arr)[4], int column)
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	
}

int Sum2DArr(int arr[][4], int column)
{
	int i, j, sum = 0;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	}
	return sum;
}

int main()
{
	/*int num = 7, result = 0;
	result = SquareByValue(num);
	printf("제곱 결과: %d \n", result);

	SquareByReference(&num);
	printf("제곱 결과: %d \n", num);*/
	/*int num1 = 1, num2 = 2, num3 = 3;
	printf("변경 전: %d %d %d \n", num1, num2, num3);

	Swap3(&num1, &num2, &num3);
	printf("변경 후: %d %d %d \n", num1, num2, num3);*/

	
	/*int arr[10];
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);
	
	

	Odd(arr, sizeof(arr) / sizeof(int));
	Even(arr,sizeof(arr)/sizeof(int));*/

	/*int villa[4][2];
	int popu, i, j;

	for ( i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d 층 %d호 인구수: ", i + 1, j + 1);
			scanf_s("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d 층 인구수: %d \n", i + 1, popu);
	}*/

	/*int arr[3][9];
	int num = 2;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr[i][j] = num * (j+1);
		}
		num++;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%d ", arr[i][j]);
		}
			
			
		printf("\n");
				
	}*/
	
	

	/*printf("sizeof(arr2d): %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d \n", sizeof(arr2d[2]));*/

	/*printf("(arr2d[0][1]): %d \n", *(*(arr2d + 0) + 1));
	printf("(arr2d[1][1]): %d \n", *(*(arr2d + 1) + 1));
	printf("(arr2d[2][1]): %d \n", *(*(arr2d + 2) + 1));*/

	/*int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p \n", arr1);
	printf("arr1+1: %p \n", arr1+1);
	printf("arr1+2: %p \n\n", arr1+2);

	printf("arr2: %p \n", arr2);
	printf("arr2+1: %p \n", arr2 + 1);*/

	/*int arr1[2][2] = {
		{1,2},{3,4}
	};
	int arr2[3][2] = {
		{1,2},{3,4},{5,6}
	};
	int arr3[4][2] = {
		{1,2},{3,4},{5,6},{7,8}
	};

	int(*ptr)[2];
	int i;

	ptr = arr1;
	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr2;
	printf("** Show 3,2 arr2 **\n");
	for (i = 0; i < 3; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr3;
	printf("** Show 4,2 arr3 **\n");
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);*/
	
int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };


ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
printf("arr2의 합: %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
	return 0;
}