#include <stdio.h>
#include "main.h"
/**
 * main - not exceeding
 *
 * Return: 0(Success)
 */
int main(void)
{
	int count;
	unsigned long x, y, z, sum;

	x = 1, y = 2, sum = 0;
	for (count = 1; count <= 33; count++)
	{
		if (x < 4000000 && (x % 2 == 0))
		{
			sum += x;
		}
		z = x + y;
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}
