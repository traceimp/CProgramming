#include <stdio.h>

int main(void)
{
	// Question 1
	/*int gugu[3][9] = {
		{2, 4, 6, 8, 10, 12, 14, 16, 18},
		{3, 6, 9, 12, 15, 18, 21, 24, 27},
		{4, 8, 12, 16, 20, 24, 28, 32, 36}
	};
	int i, j;


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%d ", gugu[i][j]);
		}
		printf("\n");
	}*/

	// Question 2
	/*int arrA[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	int arrB[4][2]={0,};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arrB[j][i] = arrA[i][j];
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arrA[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", arrB[i][j]);
		}
		printf("\n");
	}*/
	
	// Question 3
	int score[5][5] = {0,};
	int i, j, result1=0, result2=0, result3=0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 1; j++)
		{
			printf("%d번째 학생의 국어, 영어, 수학, 국사 점수를 입력해주세요:", i+1);
			scanf_s("%d %d %d %d", &score[i][j], &score[i][j+1], &score[i][j+2], &score[i][j+3]);
		}
	}

	// 과목별 총점 계산
	for (i = 0; i < 4; i++)
	{
		result1 = 0, result2 = 0;
		for (j = 0; j < 4; j++)
		{
			result1 += score[j][i];
			result2 += score[i][j];
		}
		score[4][i] = result1;
		score[i][4] = result2;
		score[4][4] += result2;
	}

	// 모든 점수 출력
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%2d ", score[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		


	return 0;
}