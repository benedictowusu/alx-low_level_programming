#include "main.h"
#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Return: 0(Success)
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();

	return (0);
}
