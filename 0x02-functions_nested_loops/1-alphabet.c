#include "main.h"
/**
 * main - printing alphabets
 *
 * Return: 0(Success)
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
