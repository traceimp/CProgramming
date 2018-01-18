#include <stdio.h>

int main(void)
{
	// Question 1
	//int num1 = 0, num2 = 0, result = 0;

	//while (num2 < 5)		// 총 5회 반복 입력받음
	//{
	//	printf("숫자 5개 입력: ");
	//	scanf_s("%d", &num1);

	//	while (num1 < 0)	// 입력받은 값이 음수라면
	//	{
	//		printf("정수 재입력: ");
	//		scanf_s("%d", &num1);
	//	}
	//	result += num1;
	//	num2++;
	//}
	//printf("총합: %d\n", result);

	// Question 2
	int num = -1, num1 = 0;
	while (num < 4)
	{
		// 맨 위의 별 1개 찍기
		while (num == -1)
		{
			printf("*\n");
			num++;
		}

		// o 반복 출력하고 마지막은 *\n 출력
		while (num1 <= num)
		{
			printf("o");
			
			while (num1 == num)
			{
				printf("*\n");
				num1++;
			}
			num1++;
		}
		num1 = 0;
		printf("\n");
		num++;		
	}
	return 0;
}