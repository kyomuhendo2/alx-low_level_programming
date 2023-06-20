#include <stdio.h>
/**
* main - prints all possible combinations of a single digit
*
* Return: Always 0 (success)
*/
int main(void)
{
	int r, n;

	for (r = 48; r <= 56; r++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > r)
			{
				putchar(r);
				putchar(n);
				if (r != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
