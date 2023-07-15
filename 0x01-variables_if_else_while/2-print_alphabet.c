#include <stdio.h>

/**
 * main - Printing alphabets in lower case
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char alphabets_in_lowerCase = 'a';
	while (alphabets_in_lowerCase <= 'z')
	{
		putchar("%c", alphabets_in_lowerCase);
		alphabets_in_lowerCase++;
	}
	putchar("\n");
	return (0);
}
