#include "main.h"
/**
 * _strcmp - a function to compare two strings
 * @s1: input string
 * @s2: input string
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
