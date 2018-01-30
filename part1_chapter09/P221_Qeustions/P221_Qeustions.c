#include <stdio.h>
// Question 1 Function
int OutNumber_max(int, int, int);	// 3���� ������ �Է¹޾� ���� ū �� ��ȯ
int OutNumber_min(int, int, int);	// 3���� ������ �Է¹޾� ���� ���� �� ��ȯ

// Question 2 Function
int CelToFah(int);
int FahToCel(int);

// Question 3 Function
void Fibonacci(int);

int main(void)
{
	int n1, n2, n3;
	int select_num, num;
	int fibo;
	// Question 1
	/*printf("3���� ������ �Է����ּ���:");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	
	printf("���� ū ��: %d\n���� ���� ��: %d\n", 
		OutNumber_max(n1, n2, n3), OutNumber_min(n1, n2, n3));*/

	// Question 2
	/*printf("1.���� 2.ȭ��\n");
	printf("����:");
	scanf_s("%d", &select_num);
	printf("�µ� �Է�:");
	scanf_s("%d", &num);

	if (select_num == 1)
		printf("�Է��Ͻ� ���� %d���� ȭ�� %d�� �Դϴ�.\n", num, CelToFah(num));
	else if(select_num == 2)
		printf("�Է��Ͻ� ȭ�� %d���� ���� %d�� �Դϴ�.\n", num, FahToCel(num));*/

	// Question 3
	printf("�Ǻ���ġ ���� ���ϱ�: ");
	scanf_s("%d", &fibo);
	Fibonacci(fibo);

	return 0;
}

// ����1 : ���� ū ��
int OutNumber_max(int n1, int n2, int n3)
{
	int max;

	// ū �� �Ǻ�
	if (n1 > n2)
		max = (n1 > n3) ? n1 : n3;
	else
		max = (n2 > n3) ? n2 : n3;

	return max;
}

// ����1 : ���� ���� ��
int OutNumber_min(int n1, int n2, int n3)
{
	int min;

	// ���� �� �Ǻ�
	if (n1 < n2)
		min = (n1 < n3) ? n1 : n3;
	else
		min = (n2 < n3) ? n2 : n3;

	return min;
}

// ���� -> ȭ��
int CelToFah(int num)
{
	int change;
	change = (num*1.8)+32;
	return change;
}

// ȭ�� -> ����
int FahToCel(int num)
{
	int change;
	change = (num-32)/1.8;
	return change;
}

// �Ǻ���ġ ����
void Fibonacci(int num)
{
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d ", f1);
	else
		printf("%d %d ", f1, f2);

	for (i = 0; i < num-2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

