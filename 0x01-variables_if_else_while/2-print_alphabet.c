#include <stdio.h>

/**
 * main - Printing alphabets in lower case
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char alpabets_in_lowerCase = 'a';
	putchar("Printing alphabets in lower case")
	while( alphabets_in_lowerCase <= 'z')
	{
		putchar("%c", alphabets_in_lowerCase);
		alphabets_in_lowerCase++;
	}
	return (0);
}
