#include <main.h>
/**
*main Entry point
*
Return: Always 0 (Success)
*/
int main (void)
{
	char *pu = "_putchar";
	while(*pu)
	{
		_putchar(*pu);
		pu++;
	}
	_putchar ('\n');

	return(0);
}
