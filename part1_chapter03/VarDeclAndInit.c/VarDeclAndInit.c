#include <stdio.h>

int main(void)
{
	int num1, num2;				// 변수 num1, num2 선언
	int num3 = 30, num4 = 40;	// 변수 num3, num4 선언 및 초기화

	printf("num1: %d, num2: %d \n\n", num1, num2);
	num1 = 10;		// 변수 num1의 초기화
	num2 = 20;		// 변수 num2의 초기화

	printf("num1: %d, num2: %d\n", num1, num2);
	printf("num3: %d, num4: %d\n", num3, num4);
	return 0;

	// 책의 예제는 쓰레기값이 들어간다고 되어있으나
	// VS2017에서는 에러 => 초기화되지 않은 '변수명' 지역 변수를 사용했습니다.
	// 라고 출력된다.
}