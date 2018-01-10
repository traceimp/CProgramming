#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2;	// 후위 감소 -> 다음행으로 넘어가야만 값의 증가/감소가 이뤄짐
	int num3 = num2;

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);

	return 0;
}