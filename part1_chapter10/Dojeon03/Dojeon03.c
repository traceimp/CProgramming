#include <stdio.h>
void nomalGCD(int, int);

int main(void)
{
	// 가이드대로 풀기
	int num1, num2;
	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);
	nomalGCD(num1, num2);

	return 0;

}

void nomalGCD(int num1, int num2)
{
	int i, end, result1, result2;

	end = (num1 > num2) ? num1 : num2;
	
	for (i = 1; i <= end; i++)
	{
		// 6의 약수 구하기
		if ((num1 % i) == 0 && (num1 / i) != 0)
		{
			result1 = num1 / i;
		}

		// 9의 약수 구하기
		if ((num2 % i) == 0 && (num2 / i) != 0)
		{
			result2 = num2 / i;
		}

		printf("reuslt1: %d, result2: %d \n", result1, result2);

		if (result1 == result2)
		{
			printf("%d ", result1);
		}
	}
}