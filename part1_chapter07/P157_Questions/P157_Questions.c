#include <stdio.h>

int main(void)
{
	// Question 1
	//int num1 = 0, num2 = 0, result = 0;

	//while (num2 < 5)		// �� 5ȸ �ݺ� �Է¹���
	//{
	//	printf("���� 5�� �Է�: ");
	//	scanf_s("%d", &num1);

	//	while (num1 < 0)	// �Է¹��� ���� �������
	//	{
	//		printf("���� ���Է�: ");
	//		scanf_s("%d", &num1);
	//	}
	//	result += num1;
	//	num2++;
	//}
	//printf("����: %d\n", result);

	// Question 2
	int num = -1, num1 = 0;
	while (num < 4)
	{
		// �� ���� �� 1�� ���
		while (num == -1)
		{
			printf("*\n");
			num++;
		}

		// o �ݺ� ����ϰ� �������� *\n ���
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