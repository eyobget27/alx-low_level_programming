#include "main.h"
/**
* _isdigit - check the code for digits between 0 and 9.
* @c: Integer input
* Return: Always 0.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
