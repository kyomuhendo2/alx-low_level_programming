#include <stdlib.h>
#include <stdio.h>

/**
* main - function that prints its own name
* @argc: number of arguments
* @argv[]: vector of the arguments
*
* Return: 0 success!
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
