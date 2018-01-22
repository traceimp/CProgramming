#include <stdio.h>

int main(void)
{
	int num;
	printf("자연수 입력:");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("insert 1\n");
	goto END;
TWO:
	printf("insert 2\n");
	goto END;
OTHER:
	printf("insert 3 or other\n");
END:
	return 0;
}