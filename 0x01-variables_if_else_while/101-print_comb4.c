#include <stdio.h>
/**
* main - prints all possible combinations of a single digit
*
* Return: Always 0 (success)
*/
int main(void)
{
	int r, n, k;

	for (r = 48; r < 58; r++)
	{
		for (n = 49; n < 58; n++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > n && n > r)
				{
					putchar(r);
					putchar(n);
					putchar(k);
					if (r != 55 || n != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

