#include "main.h"
/**
 * print_number -  Entry point
 * @n: Entry variable
 */
void print_number(int n)
{
	char d1, d2, d3, d4;
	unsigned int num;

	if (n >= 0 && n <= 9)
	{
		d1 = n;
		_putchar(d1 + '0');
	}
	if (n >=  10 && n <= 99)
	{
		d1 = n / 10;
		d2 = n % 10;
		_putchar(d1 + '0'), _putchar(d2 + '0');
	}
	if (n >= 100 && n <= 999)
	{
		d1 = n / 100;
		d2 = (n / 10) % 10;
		d3 = n % 10;
		_putchar(d1 + '0');
		_putchar(d2 + '0');
		_putchar(d3 + '0');
	}
	if (n >= 1000 && n <= 9999)
	{
		d1 = n / 1000;
		d2 = (n / 100) % 10;
		d3 = (n % 100) / 10;
		d4 = n % 10;
		_putchar(d1 + '0');
		_putchar(d2 + '0');
		_putchar(d3 + '0');
		_putchar(d4 + '0');
	}
	if (n <= -10 && n >= -99)
	{
		num = n * (-1);
		d1 = num / 10;
		d2 = num % 10;
		_putchar('-'), _putchar(d1 + '0'), _putchar(d2 + '0');
	}
}
