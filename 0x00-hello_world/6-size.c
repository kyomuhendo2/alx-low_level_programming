#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	fprintf(stderr, "[Anything]\n");
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float);
	fprintf(stderr, "\n");
	return (0);
}
