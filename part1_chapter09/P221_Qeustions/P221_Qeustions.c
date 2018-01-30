#include <stdio.h>
// Question 1 Function
int OutNumber_max(int, int, int);	// 3개의 정수를 입력받아 가장 큰 수 반환
int OutNumber_min(int, int, int);	// 3개의 정수를 입력받아 가장 작은 수 반환

// Question 2 Function
int CelToFah(int);
int FahToCel(int);

// Question 3 Function
void Fibonacci(int);

int main(void)
{
	int n1, n2, n3;
	int select_num, num;
	int fibo;
	// Question 1
	/*printf("3개의 정수를 입력해주세요:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	
	printf("가장 큰 수: %d\n가장 작은 수: %d\n", 
		OutNumber_max(n1, n2, n3), OutNumber_min(n1, n2, n3));*/

	// Question 2
	/*printf("1.섭씨 2.화씨\n");
	printf("선택:");
	scanf_s("%d", &select_num);
	printf("온도 입력:");
	scanf_s("%d", &num);

	if (select_num == 1)
		printf("입력하신 섭씨 %d도는 화씨 %d도 입니다.\n", num, CelToFah(num));
	else if(select_num == 2)
		printf("입력하신 화씨 %d도는 섭씨 %d도 입니다.\n", num, FahToCel(num));*/

	// Question 3
	printf("피보나치 수열 구하기: ");
	scanf_s("%d", &fibo);
	Fibonacci(fibo);

	return 0;
}

// 문제1 : 가장 큰 수
int OutNumber_max(int n1, int n2, int n3)
{
	int max;

	// 큰 수 판별
	if (n1 > n2)
		max = (n1 > n3) ? n1 : n3;
	else
		max = (n2 > n3) ? n2 : n3;

	return max;
}

// 문제1 : 가장 작은 수
int OutNumber_min(int n1, int n2, int n3)
{
	int min;

	// 작은 수 판별
	if (n1 < n2)
		min = (n1 < n3) ? n1 : n3;
	else
		min = (n2 < n3) ? n2 : n3;

	return min;
}

// 섭씨 -> 화씨
int CelToFah(int num)
{
	int change;
	change = (num*1.8)+32;
	return change;
}

// 화씨 -> 섭씨
int FahToCel(int num)
{
	int change;
	change = (num-32)/1.8;
	return change;
}

// 피보나치 수열
void Fibonacci(int num)
{
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);

	for (i = 0; i < num-2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

