#include <stdio.h>

int main(void)
{
	// Question 1
	/*int num1 = 0, num2 = 0, num3 = 0, total = 0;
	printf("2���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	for (num3 = num1; num3 <= num2; num3++)
	{
		total += num3;
	}
	printf("%d�� %d ������ ��� ���ڵ��� ��: %d\n", num1, num2, total);*/

	int num1 = 0, total = 1;

	printf("���� 1�� �Է�: ");
	scanf_s("%d", &num1);

	for (int i = 1; i <= num1 ; i++)
	{
		total *= i;
	}

	printf("%d!=%d\n", num1, total);

	return 0;
}