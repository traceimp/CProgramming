#include <stdio.h>

int main(void)
{
	char str[] = "Good morning!";
	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	printf("�� ���� ������ ���: %c\n", str[13]);
	printf("�� ���� ������ ���: %d\n", str[13]);

	str[12] = '?';	// �迭 str�� ���ڵ� ���ڿ� �����ʹ� ���� ����!
	printf("���ڿ� ���: %s\n", str);

	// �� ���ڿ� ���鹮�� ���� �� Ȯ��
	char nu = '\0';
	char sp = ' ';
	printf("%d %d \n", nu, sp);

	return 0;

}