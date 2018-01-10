#include <stdio.h>

int main(void)
{
	// Question 1
	/*int x1, y1, x2, y2;
	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &x1, &y1);
	printf("우 상단의 x, y 좌표: ");
	scanf_s("%d %d", &x2, &y2);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", (x2 - x1)*(y2 - y1));*/

	// Question 2
	/*double num1, num2;
	printf("두개의 실수 입력:");
	scanf_s("%lf %lf", &num1, &num2);

	printf("두 수의 합:%lf \n", num1 + num2);
	printf("두 수의 차:%lf \n", num1 - num2);
	printf("두 수의 곱:%lf \n", num1 * num2);
	printf("두 수의 나누기:%lf \n", num1 / num2);*/

	// Question 3
	// 질문1 : 0~127 (1byte로 표현 가능)
	// 질문2 : 1씩 증가
	// 질문3 : 소문자 <=> 대문자 +32증가

	// Question 4
	/*int num;
	printf("아스키 코드 값 입력: ");
	scanf_s("%d", &num);

	printf("입력하신 아스키 코드는 %c 입니다.\n", num);*/

	// Question 5
	char ch;
	printf("아스키 코드 값 입력: ");
	scanf_s("%c", &ch);

	printf("입력하신 문자의 아스키 코드는 %d 입니다.\n", ch);

	return 0;
}