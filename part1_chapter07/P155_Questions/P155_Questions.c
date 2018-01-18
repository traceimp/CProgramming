#include <stdio.h>

int main(void)
{
	// Question 1
	/*int num = 0, num_user = 0;
	printf("양의 정수 입력: ");
	scanf_s("%d", &num_user);

	while (num < num_user)
	{
		printf("Hello World! \n");
		num++;
	}*/

	// Question 2
	/*int num1 = 0, num2 = 0, num3 = 1;
	printf("양의 정수 입력: ");
	scanf_s("%d", &num2);

	while (num1 < num2)
	{
		num3 = (num1 + 1) * 3;
		printf("%d ", num3);
		num1++;
	}

	printf("\n");*/

	// Question 3
	/*int user_num = 1, result = 0;
	while (user_num != 0)
	{
		user_num = 0;

		printf("숫자 입력: ");
		scanf_s("%d", &user_num);

		result += user_num;
	}
	printf("총 합: %d \n", result);*/

	// Question 4
	/*int dan = 0, num = 9;
	printf("숫자 입력: ");
	scanf_s("%d", &dan);

	while (num > 0) 
	{
		printf("%dx%d=%d \n", dan, num, dan*num);
		num--;
	}*/

	// Question 5
	double num1 = 0, num2 = 0, num3 = 0, result = 0;
	printf("몇 개의 정수를 입력?");
	scanf_s("%lf", &num1);

	while (num3 < num1)
	{
		printf("숫자 입력: ");
		scanf_s("%lf", &num2);
		result += num2;
		num3++;
	}

	printf("평균값: %lf\n", num2 / num1);

	return 0;
}