#include "variadic_functions.h"

/**
 * print_all - function that prints everything
 * @format: constant pointer to constant string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, flag;
	char *str;
	va_list argList;

	va_start(argList, format);
	i = 0;
	while (format[i])
	{
		flag = 0;
		switch (format[i])
		{
		case ('c'):
			printf("%c", va_arg(argList, int));
			flag = 1;
			break;
		case ('i'):
			printf("%i", va_arg(argList, int));
			flag = 1;
			break;
		case ('f'):
			printf("%f", va_arg(argList, double));
			flag = 1;
			break;
		case ('s'):
			str = va_arg(argList, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			flag = 1;
			break;
		}
		if (format[i + 1] && flag)
			printf(", ");
		i++;
	}
	printf("\n");
}
