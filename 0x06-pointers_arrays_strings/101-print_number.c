#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 */

void print_number(int n)
{
	int digit, tens, x;

	digit = n;
	tens = 1;

	if (digit < 0)
		_putchar ('-');

	for (x = 0; digit > 9 || digit < -9; x++)
	{
		digit /= 10;
		tens *= 10;
	}
	for (digit = n; x >= 0; x--)
	{
		if (digit / tens < 0)
			_putchar((digit / tens) * -1 + '0');
		else
			_putchar ((digit / tens) + '0');
		digit %= tens;
		tens /= 10;
	}
}
