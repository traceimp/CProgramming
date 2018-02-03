#include <stdio.h>

void MaxAndMin(int * arr1, int ** max, int ** min)
{
	printf("%d %d \n", &arr1[0], &arr1[1]);
	if (arr1[0] > arr1[1])
	{
		max = &arr1[0];
		min = &arr1[1];
	}
	else
	{
		max = &arr1[1];
		min = &arr1[0];
	}
	printf("%d %d \n", max, min);
}

int main(void)
{
	int * maxPtr=0;
	int * minPtr=0;
	int arr[5] = {10, 20};

	MaxAndMin(arr, &maxPtr, &minPtr);
	return 0;
}