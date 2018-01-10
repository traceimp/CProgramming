#include <stdio.h>

int main(void)
{
	// 문제 1
	/*int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	printf("정수 절대값: %d\n", ~num + 1);*/

	// 문제 2 => 추후 고민
	int num;
	num = 3;
	num = num << 3;
	num = num >> 2;
	printf("3x8÷4=%d\n", num);
	return 0;
}