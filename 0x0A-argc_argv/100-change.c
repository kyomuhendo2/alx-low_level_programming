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
	int cents, num_cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		num_cents += cents / 25;
		cents %= 25;
		num_cents += cents / 10;
		cents %= 10;
		num_cents += cents / 5;
		cents %= 5;
		num_cents += cents / 2;
		cents %= 2;
		num_cents += cents;
		printf("%d\n", num_cents);
	}
	return (0);
}
