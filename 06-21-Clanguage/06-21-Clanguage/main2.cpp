#include "Default.h"

int main()
{

	/*int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d \n", sizeof(arr1)/sizeof(int));
	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (int i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (int i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (int i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");*/


	/*char str[] = "Good morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';
	printf("���ڿ� ���: %s \n", str);*/

	//char str[50];
	//int idx = 0;

	//printf("���ڿ� �Է�: ");
	//scanf_s("%s", str, sizeof(str));
	//printf("�Է¹��� ���ڿ�: %s \n", str);

	//printf("���� ���� ���: ");
	//while (str[idx] != '\0')
	//{
	//	printf("%c", str[idx]);
	//	idx++;
	//}
	//printf("\n");

	char word[50];

	scanf_s("%s", word, sizeof(word));
	int idx = 0, cnt = 0;
	while (word[idx] != '\0')
	{
		idx++;
	}

	printf("%d", idx);

	return 0;
}