#include <stdio.h>

int main(void)
{
	// ���� 1
	/*int result, num1, num2;

	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	result = num1 * num2;
	printf("�� ���� ��: %d\n", result);*/

	// ���� 2
	/*int result, num1, num2, num3;

	printf("3���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 * num2 + num3;
	printf("%dx%d+%d=%d\n", num1, num2, num3, result);*/

	// ���� 3
	/*int result, num1;

	printf("1���� ������ �Է�: ");
	scanf_s("%d", &num1);

	result = num1 * num1;
	printf("%d�� ����: %d\n", num1, result);*/

	// ���� 4
	/*int num1, num2;

	printf("2���� ������ �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	printf("��: %d\n", num1 / num2);
	printf("������: %d\n", num1 % num2);*/

	// ���� 5
	int result, num1, num2, num3;

	printf("3���� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);
	printf("������ ��: %d\n", result);

	return 0;

}