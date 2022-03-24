#include "main.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */
char *leet(char *a)
{
char leet[] = "aAeEoOtTlL";
char chan[] = "4433007711";
int i, j;

for (i = 0; a[i] != '\0'; i++)
{

for (j = 0; leet[j] != '\0'; j++)
{
if (a[i] == leet[j])
a[i] = chan[j];
}

}
return (a);
}
