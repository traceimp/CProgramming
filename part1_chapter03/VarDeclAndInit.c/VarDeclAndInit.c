#include <stdio.h>

int main(void)
{
	int num1, num2;				// ���� num1, num2 ����
	int num3 = 30, num4 = 40;	// ���� num3, num4 ���� �� �ʱ�ȭ

	printf("num1: %d, num2: %d \n\n", num1, num2);
	num1 = 10;		// ���� num1�� �ʱ�ȭ
	num2 = 20;		// ���� num2�� �ʱ�ȭ

	printf("num1: %d, num2: %d\n", num1, num2);
	printf("num3: %d, num4: %d\n", num3, num4);
	return 0;

	// å�� ������ �����Ⱚ�� ���ٰ� �Ǿ�������
	// VS2017������ ���� => �ʱ�ȭ���� ���� '������' ���� ������ ����߽��ϴ�.
	// ��� ��µȴ�.
}