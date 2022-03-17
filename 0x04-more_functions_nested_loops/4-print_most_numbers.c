#include "main.h"
/**
* print_most_numbers - checks for numbers between 0 and 9, don't print 0 & 4
* Return: 0 Always
*/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' || num != '4')
			_putchar(num);
	}
	_putchar('\n');
}
