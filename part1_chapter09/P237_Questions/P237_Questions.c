#include <stdio.h>
// int total = 0;

int AddToTotal(int num)
{
	static int total;
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf_s("%d", &num);
		printf("����: %d \n", AddToTotal(num));
	}

	return 0;
}