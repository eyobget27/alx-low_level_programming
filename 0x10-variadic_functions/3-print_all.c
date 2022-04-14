#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * prnt_char - Prints a character pointed to by a va_list
 * @ch: The character to be printed
 * Return: Nothing
 */

void prnt_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}

/**
 * prnt_int - Prints an integer pointed to by a va_list
 * @in: The integer to be printed
 * Return: Nothing
 */

void prnt_int(va_list in)
{
	printf("%d", va_arg(in, int));
}

/**
 * prnt_float - Prints a float pointed to by a va_list
 * @fl: The float to be printed
 * Return: Nothing
 */

void prnt_float(va_list fl)
{
	printf("%f", va_arg(fl, double));
}

/**
 * prnt_str - Prints a string pointed to by a va_list
 * @st: The string to be printed
 * Return: Nothing
 */

void prnt_str(va_list st)
{
	char *str;

	str = va_arg(st, char *);
	switch (!str)
	{
	case 1:
		printf("(nil)");
		break;
	default:
		printf("%s", str);
		break;
	}
}

/**
 * print_all - Function that prints anything
 * @format: A pointer to a list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
/*i and j to step through format and chr_opt_to_prnt_opt_array */
	int i, j;

	chr_opt_to_prnt_opt_type chr_opt_to_prnt_opt_array[] = {
		{"c", prnt_char},
		{"i", prnt_int},
		{"f", prnt_float},
		{"s", prnt_str},
		{NULL, NULL}
	};

	va_list elements_to_print;

	va_start(elements_to_print, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (chr_opt_to_prnt_opt_array[j].chr_opt)
		{
			if (format[i] == *(chr_opt_to_prnt_opt_array[j].chr_opt))
			{
				chr_opt_to_prnt_opt_array[j].prnt_opt(elements_to_print);
				break;
			}
			j++;
		}
		if ((format[i + 1]) != '\0' && chr_opt_to_prnt_opt_array[j].chr_opt != NULL)
			printf(", ");
		i++;
	}
	va_end(elements_to_print);
	printf("\n");
}
