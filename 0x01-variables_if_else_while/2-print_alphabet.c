#include <stdio.h>

/**
 * main - Printing alphabets in lower case
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar("%c\n", lowerCase);
		lowerCase++;
	}
	putchar("\n");
	return (0);
}
