#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	printf("���޵� ���ڿ��� ��: %d \n", argc);

	while (argv[i] != NULL)
	{
		printf("%d��° ���ڿ�: %s \n", i+1, argv[i]);
		i++;
	}

	/*for (i = 0; i < argc; i++)
	{
		printf("%d��° ���ڿ�: %s \n", i + 1, argv[i]);
	}*/

	return 0;
}