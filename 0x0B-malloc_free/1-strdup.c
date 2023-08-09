#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *via;
	unsigned int i, x = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	via = malloc(sizeof(char) * (i + 1));
	if (via == NULL)
	{
		return (NULL);
	}

	for (; str[x]; x++)
	{
		via[x] = str[x];
	}
	return (via);
}
