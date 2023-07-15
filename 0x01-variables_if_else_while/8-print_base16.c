#include <stdio.h>
/**
 * main - base
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int base16;

	for (base16 = 48; base16 < 58; base16++)
	{
		putchar(base16);
	}
	for (base16 = 97; base16 < 103; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
