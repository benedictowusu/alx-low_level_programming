#include "main.h"
#include <stdio.h>
/**
 * print_array - printing elements of an array
 * @a: array name
 * @n: number of elements
 * return: a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%i", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%i", a[n - 1]);
	}
	printf("\n");
}
