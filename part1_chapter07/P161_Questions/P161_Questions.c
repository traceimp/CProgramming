#include <stdio.h>

int main(void)
{
	// Question 1
	// ��� 1 ����:
	// ���� num�� ���� ������ �ʱ�ȭ�ؼ� ù��° �ݺ������� �˻����� '��'�� �ǰ� �Ѵ�.
	/*int num = 1, total = 0;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);*/

	// ��� 2 ����:
	// while���� �����ϱ� ���� ���α׷� ����ڷκ��� ���� 1ȸ �Է� �ް� �Ѵ�.
	/*int num = 0, total = 0;

	printf("���� �Է�(0 to quit): ");
	scanf_s("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);*/



	// Question 2
	/*int num = 0, total = 0;
	
	do
	{
		total += num;
		num += 2;
	} while (num <= 100);

	printf("¦���� ��: %d\n", total);*/

	// Question 3
	int cur = 2, is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%dx%d=%d\n", cur, is, cur*is);
			is++;
		} while (is<10);
		printf("---------------\n");
		cur++;
	} while (cur < 10);

	return 0;
}