#include <stdio.h>

int main(void)
{
	// Question 1
	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		/**ptr += 2;
		ptr++;*/
		*(ptr++) += 2;
	}

	for (int j = 0; j < 5; j++)
		printf("%d ", arr[j]);

	printf("\n");

	

	// Question 2
	/*printf("원래 주소 값:");
	for (int j = 0; j < 5; j++)
		printf("%p ", ptr[j]);
	printf("\n");

	for (int j = 0; j < 5; j++)
		*(ptr+j) += 2;

	printf("주소 값 변경:");
	for (int j = 0; j < 5; j++)
		printf("%p ", ptr[j]);
	printf("\n");*/


	// Question 3
	/*int * ptr_last = &arr[4];
	int sum=0;

	for (int i = 0; i < 5; i++)
		sum += *(ptr_last-i);

	printf("%d\n", sum);*/


	// Question 4
	/*int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int *ptr_start=arr1, *ptr_end=&arr1[5];
	int temp=0;

	for (int i = 0; i < 6; i++)
		printf("%d ", *(ptr_start+i));

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		temp = *(ptr_start + i);
		*(ptr_start + i) = *(ptr_end - i);
		*(ptr_end - i) = temp;
	}

	for (int i = 0; i < 6; i++)
		printf("%d ", ptr_start[i]);*/




	return 0;
}