#include <stdio.h>

int main(void)
{
	char str[100], max="\0";
	int idx = 0;

	// Question 1
	/*printf("�ϳ��� ���� �ܾ �Է�:");
	scanf_s("%s", str, sizeof(str));

	printf("�Է� ���� ���ڿ�: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	printf("�Է¹��� ���ڿ��� ����: %d\n", idx);*/

	// Question 2
	/*printf("�ϳ��� ���� �ܾ �Է�:");
	scanf_s("%s", str, sizeof(str));

	while (str[idx] != '\0')
		idx++;

	printf("%d\n", idx);

	while (idx != 0)
	{
		printf("%c", str[idx-1]);
		idx--;
	}
	printf("\n");*/

	// Question 3
	printf("�ϳ��� ���� �ܾ �Է�:");
	scanf_s("%s", str, sizeof(str));

	while (str[idx] != 0)
	{
		max = (max < str[idx]) ? str[idx] : max;
		idx++;
	}

	printf("�ƽ�Ű �ڵ尪�� ���� ū ����: %c\n", max);
	return 0;
}