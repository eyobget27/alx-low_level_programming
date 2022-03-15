#include <stdio.h>

/**
 * main -  print the first 100 fibonacci numbers, then newline
 *
 * Return: (0) Success
 */

int main(void)
{
	int i;

	unsigned long int x, y, z;
	x = 1;
	y = 2;

	printf("%lu, %lu", x, y);
	for (i = 0; i < 96; i++)
	{
		z = x + y;
		printf(", %lu", z);
		x = y;
		y = z;
	}


	putchar('\n');
	return (0);
}
