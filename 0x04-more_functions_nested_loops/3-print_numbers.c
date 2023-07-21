#include "main.h"
/**
 * print_numbers - from 0 - 9
 * @num: character to check
 * return: void
 **/
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
