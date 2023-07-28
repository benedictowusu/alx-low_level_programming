#include "main.h"
/**
 * reverse_array - function to reverse am array of integers
 * @a: input value
 * @n: input value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		int swap = a[start];
		a[start] = a[end];
		a[end] = swap;
		start++;
		end--;
	}
}
