#include <stdio.h>

int main(void)
{
	// Question 1
	/*int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);*/


	// Question 2
	int num1=10, num2=20;
	int * ptr1 = &num1, * ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	ptr1 = &num2, ptr2 = &num1;
	printf("%d %d\n", num1, num2);
	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}