#include <stdio.h>
void nomalGCD(int, int);

int main(void)
{
	// ���̵��� Ǯ��
	int num1, num2;
	printf("�� ���� ���� �Է�:");
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
		// 6�� ��� ���ϱ�
		if ((num1 % i) == 0 && (num1 / i) != 0)
		{
			result1 = num1 / i;
		}

		// 9�� ��� ���ϱ�
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