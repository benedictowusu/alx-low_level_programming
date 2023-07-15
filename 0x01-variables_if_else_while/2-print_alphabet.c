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

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar("%c\n",lowerCase);
	}
	return (0);
}
