#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
* postive_number - check for digit
* @str: input string
*
* Return: 0 success!
*/
int postive_number(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			return (1);
		}
		str++;
	}
	return (0);
}

/**
* main - function that prints its own name
* @argc: number of arguments
* @argv: vector of the arguments
*
* Return: 0 success!
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (postive_number(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
