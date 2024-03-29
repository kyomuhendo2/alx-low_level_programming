#include <stdlib.h>
#include <stdio.h>

/**
* main - prints oppcodes
* @argc: number of arguments
* @argv: values of the arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", arr[i]);
		if (i != bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
