#include <stdio.h>





int main()
{

	/*int A[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int B[4][2];



	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			B[j][i] = A[i][j];
		}
	}

	printf("2차원 배열 A: \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("2차원 배열 B: \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}*/

	int score[5][5] = { 0, };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			scanf_s("%d", &score[i][j]);
		
	}


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			score[4][i] += score[j][i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
			score[i][4] += score[i][j];
	}
		
	printf("\n");
	printf("점수 결과 총 출력: \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
		


	return 0;
}