#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing to 98
 * @n: the integer to be checked
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%i ", n);
	}
}
