#include "main.h"
/**
 * more_numbers - 10x from 0 to 14
 * @c - integer to print
 * @x - integer to count
 * return: void
 */
void more_numbers(void)
{
	int c, x;

	for (c = 1; c <= 10; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
				_putchar((x % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
