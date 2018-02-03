#include <stdio.h>

// Quesiton 2
void SimpleFuncOne(int * arr1, int *arr2)
{
	
}

void SimpleFuncTwo(int arr3[][4], int (*arr4)[4])
{

}

int main(void)
{
	// Question 1
	/*int * arr1[5] = { 1, 2, 3, 4, 5 };
	int * arr2[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	int **ptr1 = arr1;
	int *(*ptr2)[5] = arr2;

	printf("%d %d %d \n", ptr1[0], ptr1[1], ptr1[2]);
	printf("%d %d %d \n", ptr2[1][0], ptr2[1][1], ptr2[1][2]);*/


	// Question 2
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncOne(arr3, arr4);

	return 0;
}