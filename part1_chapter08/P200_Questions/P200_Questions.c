#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	// MJ �ذ���
	//switch (num)
	//{
	//case 0:
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//case 6:
	//case 7:
	//case 8:
	//case 9:
	//case 10:
	//	printf("0�̻� 10�̸�\n");
	//	break;
	//case 11:
	//case 12:
	//case 13:
	//case 14:
	//case 15:
	//case 16:
	//case 17:
	//case 18:
	//case 19:
	//	printf("10�̻� 20�̸�\n");
	//	break;
	//case 21:
	//case 22:
	//case 23:
	//case 24:
	//case 25:
	//case 26:
	//case 27:
	//case 28:
	//case 29:
	//	printf("20�̻� 30�̸�\n");
	//	break;
	//default:
	//	printf("30�̻�\n");
	//}

	// ����
	switch (num/10)
	{
	case 0:
		printf("0�̻� 10�̸�\n");
		break;
	case 1:
		printf("10�̻� 20�̸�\n");
		break;
	case 2:
		printf("20�̻� 30�̸�\n");
		break;
	default:
		printf("30�̻�\n");
	}
}