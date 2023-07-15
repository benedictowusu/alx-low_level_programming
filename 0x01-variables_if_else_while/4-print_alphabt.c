#include <stdio.h>

/**
 * main - printing without q and e
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char lower = 'a';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if ((lower == 'q') || (lower == 'e'))
		{
			continue;
		}
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
