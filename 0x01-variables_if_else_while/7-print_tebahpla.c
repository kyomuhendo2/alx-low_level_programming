#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - prints the the alphabet except q and e
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
