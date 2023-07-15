#include <stdio.h>
/**
 * main - combo
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int comb;

	for (comb = 48; comb < 58; comb++)
	{
		putchar(comb);
		if (comb != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
