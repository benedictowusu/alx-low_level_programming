#include "main.h"
/**
 * _strlen - length of a string
 * @s: string
 */
int _strlen(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
