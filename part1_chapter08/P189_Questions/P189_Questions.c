#include <stdio.h>

int main(void)
{
	// Question 1
	/*for (int i = 0; i < 100; i++)
	{
		if (i % 7 == 0 && i % 9 == 0)
		{
			printf("%d\n", i);
		}
	}*/

	// Question 2
	/*int num1, num2, result;

	printf("�� ���� ���� �Է�:");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		result = num2 - num1;
	}
	else
	{
		result = num1 - num2;
	}

	printf("�� ���� ��: %d\n", result);*/

	// Question 3
	/*int ko, en, ma, avg;
	char grade;

	printf("���� ����: ");
	scanf_s("%d", &ko);
	printf("���� ����: ");
	scanf_s("%d", &en);
	printf("���� ����: ");
	scanf_s("%d", &ma);

	avg = (ko + en + ma) / 3;

	if (avg >= 90)
	{
		grade = 'A';
	}
	else if (avg >= 80)
	{
		grade = 'B';
	}
	else if (avg >= 70)
	{
		grade = 'C';
	}
	else if (avg >= 50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	printf("�л��� ��� ������ %d���̸�, ����� %c�Դϴ�.\n", avg, grade);
*/

	// Question 4
	int num1, num2, result;

	printf("�� ���� ���� �Է�:");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 > num2) ? num1 - num2 : num2 - num1;

	printf("�� ���� ��: %d\n", result);
	return 0;
}