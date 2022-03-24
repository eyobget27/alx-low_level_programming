#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code for Holberton School students.
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */
char *cap_string(char *a)
{
char separator[] = " \t\n,;.!?\"(){}";
int i, j;

for (i = 0; a[i] != '\0'; i++)
{

if (a[i] >= 'a' && a[i] <= 'z')
{

if (i == 0)
a[i] -= 32;


else
{
for (j = 0; separator[j] != '\0'; j++)
{
if (a[i - 1] == separator[j])
a[i] -= 32;
}
}

}
}
return (a);
}
