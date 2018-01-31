#include <stdio.h>

// Question 1
void ShowAllData(const int * arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	// Question 1
	int arr[3] = { 1,2,3 };
	ShowAllData(arr, sizeof(arr) / sizeof(int));

	return 0;
}