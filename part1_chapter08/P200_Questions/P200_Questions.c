#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);

	// MJ 해결방법
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
	//	printf("0이상 10미만\n");
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
	//	printf("10이상 20미만\n");
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
	//	printf("20이상 30미만\n");
	//	break;
	//default:
	//	printf("30이상\n");
	//}

	// 정답
	switch (num/10)
	{
	case 0:
		printf("0이상 10미만\n");
		break;
	case 1:
		printf("10이상 20미만\n");
		break;
	case 2:
		printf("20이상 30미만\n");
		break;
	default:
		printf("30이상\n");
	}
}