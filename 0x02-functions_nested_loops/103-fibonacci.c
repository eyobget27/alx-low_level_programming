#include <stdio.h>

/**
 * main - print out even number in fibonacci sequence up to 4,000,000
 *
 * Return: (0) Success
 */

int main(void)
{
	int x, y, z, sum = 0;

	x = 1;
	y = 2;
	sum = 2;

	while (z <= 4000000)
	{
		z = x + y;

		x = y;
		y = z;

		if (z % 2 == 0)
		{
			sum += z;
		}
	}
	printf("%d\n", sum);

	return (0);
}
