#include <stdlib.h>
#include <stdio.h>

/**
* main - function that prints its own name
* @argc: number of arguments
* @argv: vector of the arguments
*
* Return: 0 success!
*/

int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
