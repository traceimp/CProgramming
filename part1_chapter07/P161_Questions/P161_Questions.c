#include <stdio.h>

int main(void)
{
	// Question 1
	// 방법 1 구현:
	// 변수 num의 값을 적절히 초기화해서 첫번째 반복조건의 검사결과가 '참'이 되게 한다.
	/*int num = 1, total = 0;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);*/

	// 방법 2 구현:
	// while문에 진입하기 전에 프로그램 사용자로부터 값을 1회 입력 받게 한다.
	/*int num = 0, total = 0;

	printf("정수 입력(0 to quit): ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);*/



	// Question 2
	/*int num = 0, total = 0;
	
	do
	{
		total += num;
		num += 2;
	} while (num <= 100);

	printf("짝수의 합: %d\n", total);*/

	// Question 3
	int cur = 2, is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%dx%d=%d\n", cur, is, cur*is);
			is++;
		} while (is<10);
		printf("---------------\n");
		cur++;
	} while (cur < 10);

	return 0;
}