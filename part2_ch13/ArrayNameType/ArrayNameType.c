#include <stdio.h>

int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("Array Name: %p \n", arr);		// 주소값 출력 서식문자 => %p
	printf("1st Element: %p \n", &arr[0]);
	printf("2nd Element: %p \n", &arr[1]);
	printf("3rd Element: %p \n", &arr[2]);
	// arr = &arr[i];		// 이 문장은 컴파일 에러를 일으킨다.
	return 0;
}