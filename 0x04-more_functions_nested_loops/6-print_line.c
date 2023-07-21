#include "main.h"
/**
 * print_line - draw a line
 * @n: number of times to print
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x = 1;

		if (x <= n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}
}
