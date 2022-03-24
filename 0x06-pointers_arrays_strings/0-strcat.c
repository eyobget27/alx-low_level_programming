#include "main.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; *dest != 0; i++)
dest++;

for (j = 0; src[j] != 0; j++)
{
*dest = src[j];
dest++;
}
*dest = '\0';
dest -= (i + j);
return (dest);
}
