#include <stdio.h>

int main(void)
{
	// Question 1
	/*int x1, y1, x2, y2;
	printf("�� ����� x, y ��ǥ: ");
	scanf_s("%d %d", &x1, &y1);
	printf("�� ����� x, y ��ǥ: ");
	scanf_s("%d %d", &x2, &y2);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", (x2 - x1)*(y2 - y1));*/

	// Question 2
	/*double num1, num2;
	printf("�ΰ��� �Ǽ� �Է�:");
	scanf_s("%lf %lf", &num1, &num2);

	printf("�� ���� ��:%lf \n", num1 + num2);
	printf("�� ���� ��:%lf \n", num1 - num2);
	printf("�� ���� ��:%lf \n", num1 * num2);
	printf("�� ���� ������:%lf \n", num1 / num2);*/

	// Question 3
	// ����1 : 0~127 (1byte�� ǥ�� ����)
	// ����2 : 1�� ����
	// ����3 : �ҹ��� <=> �빮�� +32����

	// Question 4
	/*int num;
	printf("�ƽ�Ű �ڵ� �� �Է�: ");
	scanf_s("%d", &num);

	printf("�Է��Ͻ� �ƽ�Ű �ڵ�� %c �Դϴ�.\n", num);*/

	// Question 5
	char ch;
	printf("�ƽ�Ű �ڵ� �� �Է�: ");
	scanf_s("%c", &ch);

	printf("�Է��Ͻ� ������ �ƽ�Ű �ڵ�� %d �Դϴ�.\n", ch);

	return 0;
}