#include "main.h"
/**
 * print_alphabet_x10 - printing 10x
 *
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int print = 0;

	while (print < 10)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	print++;
	}
}
