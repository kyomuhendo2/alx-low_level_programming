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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
