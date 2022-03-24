#include "main.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: is a pointer type char
 * @s2: is a pointer type char
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int result, i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
result = (s1[i] - '0') - (s2[i] - '0');

else
{
result = (s1[i] - '0') - (s2[i] - '0');
break;
}
}

return (result);
}
