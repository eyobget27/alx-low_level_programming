#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
*main-Entry-point
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int j;

for (i = 48; i < 57; i++)
{
for (j = i + 1; j < 58; j++)
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}

putchar (...\n');
(return (0);)
}
