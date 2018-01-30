#include <stdio.h>

int main(void)
{
	// Question 1
	//int arr[5], i, arrsize;
	//int sum=0, min, max;

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d번째 정수를 입력하세요:", i+1);
	//	scanf_s("%d", &arr[i]);
	//}

	//arrsize = sizeof(arr) / sizeof(int);

	//for (i = 0; i < arrsize; i++)
	//{
	//	// 총합 구하기
	//	sum += arr[i];
	//}

	//// 최소, 최대값 구하기
	//min = arr[0], max = arr[0];
	//for (i = 0; i < arrsize-1; i++)
	//{
	//	min = (min < arr[i]) ? min : arr[i];
	//	max = (max > arr[i]) ? max : arr[i];
	//}

	//printf("입력한 숫자들의 합: %d\n", sum);
	//printf("입력한 숫자들의 최소값: %d\n", min);
	//printf("입력한 숫자들의 최대값: %d\n", max);


	// Question 2
	char arr[] = { "Good time" };
	int arrsize;

	arrsize = sizeof(arr) / sizeof(char);
	for (int i = 0; i < arrsize; i++)
		printf("%c", arr[i]);


	return 0;
}