#include "main.h"
/**
 * print_last_digit - printing last number
 * @n: the integer to be checked
 *
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int neg;

	if (n > 0)
	{
		neg = -n;
		neg = n % 10;
	}

	if (neg < 0)
	{
		neg = -neg;
		_putchar(neg + '0');
	}
	return (neg);
}
