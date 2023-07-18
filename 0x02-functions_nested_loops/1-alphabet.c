#include <main.h>
#include <stdio.h>
/**
 * main - printing alphabets
 *
 * Return: 0(Success)
 *
 */
void alphas()
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
	alphas();

	return (0);
}
