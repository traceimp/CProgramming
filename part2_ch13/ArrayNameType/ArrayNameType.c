#include <stdio.h>

int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("Array Name: %p \n", arr);		// �ּҰ� ��� ���Ĺ��� => %p
	printf("1st Element: %p \n", &arr[0]);
	printf("2nd Element: %p \n", &arr[1]);
	printf("3rd Element: %p \n", &arr[2]);
	// arr = &arr[i];		// �� ������ ������ ������ ����Ų��.
	return 0;
}