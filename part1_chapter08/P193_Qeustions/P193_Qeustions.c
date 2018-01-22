#include <stdio.h>

int main(void)
{
	// Question 1
	/*int dan, num;
	for (dan = 2; dan < 9; dan++)
	{
		for (num = 1; num < 9; num++)
		{
			if (num > dan)
			{
				break;
			}

			if (dan % 2 == 0)
			{
				printf("%dx%d=%d\n", dan, num, dan*num);
				continue;
			}
		}
		printf("\n");
	}*/

	// Question 2
	int num1, num2;

	//num1 + num2 = 9 || num2 + num1 = 9
	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num1 + num2 != 9)
			{
				continue;
			}
			else
			{
				int sum = (num1 * 10) + num2 + (num2 * 10) + num1; 
				printf("%3d\n+%d\n-----\n %d\n\n", (num1*10 + num2), (num2*10 + num1), sum);
			}
		}
	}

	return 0;
}