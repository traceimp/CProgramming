#include <stdio.h>

int SquareByValue(int num)
{
	return num * num;
}

int SquareByRef(int * num)
{
	int num1 = *num;
	*num = num1 * num1;
	//return num1 * num1;
	//return (*num)*(*num);
}

void Swap3(int * num1, int * num2, int * num3)
{
	int temp = *num2;

	*num2 = *num1;
	*num1 = *num3;
	*num3 = temp;
}

int main(void)
{
	// Question 1
	int num_val=9, num_ref=8;

	num_val = SquareByValue(num_val);
	num_ref = SquareByRef(&num_ref);

	printf("num_val: %d\nnum_ref: %d\n", num_val, num_ref);

	// Question 2
	int num1=10, num2=20, num3=30;
	
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d\n", num1, num2, num3);

	return 0;
}