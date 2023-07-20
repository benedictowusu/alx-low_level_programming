#include <stdio.h>
#include "main.h"
/**
 * main - sum of 3 and 5
 *
 * Return: 0(Success)
 */
int main(void)
{
	int n, p;

	p = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			p = + n;
		}
	}
	printf("%i\n", p);
	return (0);
}
