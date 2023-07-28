#include "main.h"
/**
 * _strncat - function to concatenate 2 strings
 * @dest: input value
 * @src: input value
 * @n: input value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	char* end = dest;

	while (*end != '\0')
	{
		end++;
	}
	i = 0;

	while (*src != '\0' && i < n)
	{
		*end = *src;
		end++;
		src++;
		i++;
	}
	*end = '\0';
	
	return dest;
}
