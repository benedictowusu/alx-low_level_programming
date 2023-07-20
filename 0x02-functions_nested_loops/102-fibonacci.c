#include <stdio.h>
#include "main.h"
/**
 * main - printing first fibonacci
 *
 * Return: 0(success)
 */
int main(void)
{
	int count;
	unsigned long prev, nex, sum;

	count = 0, prev = 0, nex = 1;
	while (count < 50)
	{
		sum = prev + nex;
		printf("%i", sum);

		prev = nex;
		nex = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
