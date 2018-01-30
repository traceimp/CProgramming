#include <stdio.h>
void gugu(int, int);

int main(void)
{
	int num1, num2;
	printf("정수 2개 입력:");
	scanf_s("%d %d", &num1, &num2);
	gugu(num1, num2);
	return 0;
}

void gugu(int num1, int num2)
{
	int i, dan;

	if (num1 < num2)
	{
		for (dan = num1; dan <= num2; dan++)
		{
			for (i = 1; i < 10; i++)
			{
				printf("%dx%d=%d\n", dan, i, dan*i);
			}
			printf("----------\n");
		}
	}
	else
	{
		for (dan = num2; dan <= num1; dan++)
		{
			for (i = 1; i < 10; i++)
			{
				printf("%dx%d=%d\n", dan, i, dan*i);
			}
			printf("----------\n");
		}
	}
		
		

}