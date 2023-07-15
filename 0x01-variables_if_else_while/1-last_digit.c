#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - finding last number
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int d = n % 10;
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, d);
	}
	else if( n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, d);
	}
	else 
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
