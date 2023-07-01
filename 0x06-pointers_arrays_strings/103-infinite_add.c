#include "main.h"

/**
* rev_string - reverse array
* @n: integer parameters
*
* Return: 0
*/

void rev_string(char *n)
{
	int i;	
	int j;
	char res;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for ( j = 0; j < i; j++, i--)
	{
		res = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = res;
	}
} 

/**
* infinite_add - adds two numbers
* @n1: integer 1
* @n2: integer 2
* @r: buffer to store the result
* @size_r: buffer size
*
* Return: void
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int inf = 0, i = 0, j = 0, nums = 0;
	int num1 = 0, num2 = 0, total_num = 0;

	while(*(n1 + i) != '\0')
		i++;
	while(*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || inf == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = *(n1 + i) - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = *(n2 + j) - '0';
		total_num = num1 + num2 + inf;
		if (total_num >= 10)
			inf = 1;
		else
			inf = 0;
		if (nums >= (size_r - 1))
			return (0);
		*(r + nums) = (total_num % 10) + '0';
		nums++;
		j--;
		i--;
	}
	if (nums == size_r)
		return (0);
	*(r + nums) = '\0';
	rev_string(r);
	return (r);
}
