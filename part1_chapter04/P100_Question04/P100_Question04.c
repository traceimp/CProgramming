#include <stdio.h>

int main(void)
{
	// ���� 1
	/*int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	printf("���� ���밪: %d\n", ~num + 1);*/

	// ���� 2 => ���� ���
	int num;
	num = 3;
	num = num << 3;
	num = num >> 2;
	printf("3x8��4=%d\n", num);
	return 0;
}