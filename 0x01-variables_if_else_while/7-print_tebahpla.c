#include <stdio.h>
/**
 * main - reverse
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char reve = 'z';

	for ( reve = 'z'; reve >= 'a'; reve--)
	{
		putchar(reve);
	}
	putchar('\n');
	return (0);
}
