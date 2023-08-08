#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *sda;
	int x, y = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[x] != '\0')
	{
		x++;
	}

	while (s2[y] != '\0')
	{
		y++;
	}
	sda = malloc(sizeof(char) * (x + y + 1));

	if (sda == NULL)
	{
		return (NULL);
	}

	x = y = 0;

	while (s1[x] != '\0')
	{
		sda[x] = s1[x];
	}

	while (s2[y] != '\0')
	{
		sda[x] = s2[y];
		x++;
		y++;
	}

	sda[x] = '\0';
	return (sda);
}