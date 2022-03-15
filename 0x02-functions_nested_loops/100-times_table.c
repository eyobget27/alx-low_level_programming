#include "main.h"
/**
 * print_times_table - print a 'n x n' multiplication table. Where 0 > n <= 15
 *
 * @n:                 Size of multiplication table
 *
 * Return:             None
 */

void print_times_table(int n)
{
	int i, j, product, comma = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			comma = 0;
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				comma == 0 ? comma = 1 : _putchar(',') && _putchar(' ');
				if (product <= 9)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(i * j + '0');
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			} _putchar('\n');
		}
	}
}
