#include "main.h"
#include <stdio.h>

/**
* _strncat - checks the code
* @dest: is a pointer type char
* @src: is a pointer type char
* @n: is a int variable
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *dest != 0; i++)
		dest++;
	for (j = 0; j < n && src[j] != 0; j++)
	{
		*dest = src[j];
		dest++;
	}
	*dest = '\0';
	dest -= (i + j);
	return (dest);
}
