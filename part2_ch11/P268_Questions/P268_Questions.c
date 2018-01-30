#include <stdio.h>

int main(void)
{
	char str[100], max="\0";
	int idx = 0;

	// Question 1
	/*printf("하나의 영어 단어를 입력:");
	scanf_s("%s", str, sizeof(str));

	printf("입력 받은 문자열: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	printf("입력받은 문자열의 길이: %d\n", idx);*/

	// Question 2
	/*printf("하나의 영어 단어를 입력:");
	scanf_s("%s", str, sizeof(str));

	while (str[idx] != '\0')
		idx++;

	printf("%d\n", idx);

	while (idx != 0)
	{
		printf("%c", str[idx-1]);
		idx--;
	}
	printf("\n");*/

	// Question 3
	printf("하나의 영어 단어를 입력:");
	scanf_s("%s", str, sizeof(str));

	while (str[idx] != 0)
	{
		max = (max < str[idx]) ? str[idx] : max;
		idx++;
	}

	printf("아스키 코드값이 가장 큰 문자: %c\n", max);
	return 0;
}