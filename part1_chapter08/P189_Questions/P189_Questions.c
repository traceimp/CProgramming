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

	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		result = num2 - num1;
	}
	else
	{
		result = num1 - num2;
	}

	printf("두 수의 차: %d\n", result);*/

	// Question 3
	/*int ko, en, ma, avg;
	char grade;

	printf("국어 점수: ");
	scanf_s("%d", &ko);
	printf("영어 점수: ");
	scanf_s("%d", &en);
	printf("수학 점수: ");
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
	printf("학생의 평균 점수는 %d점이며, 등급은 %c입니다.\n", avg, grade);
*/

	// Question 4
	int num1, num2, result;

	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 > num2) ? num1 - num2 : num2 - num1;

	printf("두 수의 차: %d\n", result);
	return 0;
}