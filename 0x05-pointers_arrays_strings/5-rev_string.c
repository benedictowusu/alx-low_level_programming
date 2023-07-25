#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * return: string reversed
 */
void rev_string(char *s)
{
	char rev = s[0];
	int check = 0;
	int x;

	while (s[check] != '\0')
	{
		check++;
	}
	for (x = 0; x < check; x++)
	{
		check--;
		rev = s[x];
		s[x] = s[check];
		s[check] = rev;
	}
}
