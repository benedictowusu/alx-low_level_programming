#include "main.h"
/**
 * _puts - prints string fllowed ny a mew line
 * @str: string for printing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
