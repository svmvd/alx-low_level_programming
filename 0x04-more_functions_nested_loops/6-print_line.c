#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of _ to be printed
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
			_putchar('_');
	}
	_putchar('\n');
}
