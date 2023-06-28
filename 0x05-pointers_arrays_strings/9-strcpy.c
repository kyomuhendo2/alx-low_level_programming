#include"main.h"

/**
* _strcpy - copies the string
* @src: string to copy
* @dest: destination of the copied string
*
* Return: char on success!
*/

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
