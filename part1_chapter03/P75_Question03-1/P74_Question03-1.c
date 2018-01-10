#include <stdio.h>

int main(void)
{
	// 문제 1
	/*int result, num1, num2;

	printf("두 수를 입력: ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 * num2;
	printf("두 수의 곱: %d\n", result);*/

	// 문제 2
	/*int result, num1, num2, num3;

	printf("3개의 수를 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%dx%d+%d=%d\n", num1, num2, num3, result);*/

	// 문제 3
	/*int result, num1;

	printf("1개의 정수를 입력: ");
	scanf_s("%d", &num1);

	result = num1 * num1;
	printf("%d의 제곱: %d\n", num1, result);*/

	// 문제 4
	/*int num1, num2;

	printf("2개의 정수를 입력: ");
	scanf_s("%d %d", &num1, &num2);

	printf("몫: %d\n", num1 / num2);
	printf("나머지: %d\n", num1 % num2);*/

	// 문제 5
	int result, num1, num2, num3;

	printf("3개의 수를 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("문제의 답: %d\n", result);

	return 0;

}