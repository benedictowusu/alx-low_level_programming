#include <stdio.h>
#include "main.h"
/**
 * main - not exceeding
 *
 * Return: 0(Success)
 */
int main(void)
{
	int count = 1;
	unsigned long x, y, z, sum;

	x = 1, y = 2, sum = 0;
	while (count <= 33)
	{
		while (x < 4000000 && (x % 2 == 0))
		{
			sum += x;
		}
		z = x + y;
		x = y;
		y = z;
	count++;
	}
	printf("%lu\n", sum);
	return (0);
}
