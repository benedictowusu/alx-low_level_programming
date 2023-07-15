#include <stdio.h>
/**
 * main - putchar only
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
