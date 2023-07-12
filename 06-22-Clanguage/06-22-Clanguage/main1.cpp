#include <stdio.h>

int main()
{
	/*int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	printf("num1: %d, num2: %d \n",num1, num2);*/

	int num1 = 10, num2 = 20;
	int* ptr1;
	int* ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("변경 전 계산 전 ptr1: %d, ptr2: %d \n", *ptr1, *ptr2);
	(*ptr1) += 10;
	(*ptr2) -= 10;
	printf("변경 전 계산 후 ptr1: %d, ptr2: %d \n", *ptr1, *ptr2);
	ptr1 = &num2;
	ptr2 = &num1;
	printf("변경 후 ptr1: %d, ptr2: %d \n", *ptr1, *ptr2);

	return 0;
}