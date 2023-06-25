#include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer
* @x: is the variable being evaluated
*
* Return: 0 always a success!
*/

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
