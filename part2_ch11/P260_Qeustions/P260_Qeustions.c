#include <stdio.h>

int main(void)
{
	// Question 1
	//int arr[5], i, arrsize;
	//int sum=0, min, max;

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d��° ������ �Է��ϼ���:", i+1);
	//	scanf_s("%d", &arr[i]);
	//}

	//arrsize = sizeof(arr) / sizeof(int);

	//for (i = 0; i < arrsize; i++)
	//{
	//	// ���� ���ϱ�
	//	sum += arr[i];
	//}

	//// �ּ�, �ִ밪 ���ϱ�
	//min = arr[0], max = arr[0];
	//for (i = 0; i < arrsize-1; i++)
	//{
	//	min = (min < arr[i]) ? min : arr[i];
	//	max = (max > arr[i]) ? max : arr[i];
	//}

	//printf("�Է��� ���ڵ��� ��: %d\n", sum);
	//printf("�Է��� ���ڵ��� �ּҰ�: %d\n", min);
	//printf("�Է��� ���ڵ��� �ִ밪: %d\n", max);


	// Question 2
	char arr[] = { "Good time" };
	int arrsize;

	arrsize = sizeof(arr) / sizeof(char);
	for (int i = 0; i < arrsize; i++)
		printf("%c", arr[i]);


	return 0;
}