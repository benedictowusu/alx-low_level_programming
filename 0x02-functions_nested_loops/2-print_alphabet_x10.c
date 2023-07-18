#include <stdio.h>
/**
 * main - printing 10x
 *  
 * Return: 0(Success)
 *
 */
void print_alphabet_x10(void)
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
	int print = 0;

	while (print <= 10)
	{
		print_alphabet_x10();
		print++;
	}
	return (0);
}
