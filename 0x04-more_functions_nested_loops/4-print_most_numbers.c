#include "main.h"
/**
 * print_most_numbers - printing numbers from 0 to 9 except 2 n 4
 * @c: character to check
 *
 * return: void
 */
void print_most_numbers(void)
{
	char c = '0';

	if (c <= '9')
	{
		if (c != '2' || c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
