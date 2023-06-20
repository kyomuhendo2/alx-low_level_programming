#include <stdio.h>

/**
* main - prints all possible combinations of a single digit
*
* Return: Always 0 (success)
*/
int main(void)
{
	int r;
	
	for (r = 48; r < 58; r++)
	{
		putchar(r);
		if (r != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
