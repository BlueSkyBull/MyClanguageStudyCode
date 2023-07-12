#include <stdio.h>

int main()
{
	/*int arr1[3] = { 0,1,2 };
	double arr2[3] = { 1.1,2.2,3.3 };

	printf("%d %g \n", *arr1, *arr2);
	
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);*/

	/*int arr[3] = { 15,25,35 };
	int* ptr = &arr[0];

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);*/

	/*int arr[3] = { 11,22,33 };
	int* ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d " , *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");*/


	/*int arr[5] = { 1,2,3,4,5 };

	int* ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);*/

	/*int arr[5] = { 1,2,3,4,5 };

	int* ptr = arr;
	for (int i = 0; i < 5; i++)
	{
		*(ptr+i)+= 2;
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", *(ptr + i));*/

	/*int arr[5] = { 1,2,3,4,5 };
	int sum = 0;
	int* ptr = &arr[4];

	for (int i = 4; i >= 0; i--)
	{
		sum += *ptr;
		ptr--;
	}

	printf("sum: %d \n", sum);*/

	int arr[6] = { 1,2,3,4,5, 6 };

	int* fptr, * rptr;
	fptr = arr;
	rptr = &arr[5];
	int len = (sizeof(arr) / sizeof(int)) / 2;
	for (int i = 0; i < len; i++)
	{
		int temp = *fptr;
		*fptr = *rptr;
		*rptr = temp;

		fptr++; rptr--;
	}

	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	

	return 0;
}