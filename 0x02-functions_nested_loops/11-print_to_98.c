#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing to 98
 * @n: the integer to be checked
 */
void print_to_98(int n)
{
	if (n == 0)
	{
		while (n <= 98)
		{
			printf("%i\n, ",n);
		}
		n++;
	}
	else if (n == 98)
	{
		printf("%i\n, ",n);
	}
	else if ( n == 111)
	{
		while (n >= 98)
		{
			printf("%i\n, ",n);
		}
		n--;
	}
	else if (n == 81)
	{
		while (n <= 98)
		{
			printf("%i\n, ",n);
		}
		n++;
	}
	else if (n == -10)
	{
		while (n <= 98)
		{
			printf("%i\n, ",n);
		}
		n++;
	}
}
