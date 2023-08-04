#include "main.h"
/**
 * _strcat - a function to concatenate two strings
 * @dest: destination string source string will be appended
 * @src: a pointer to the source string which will be appended
 * Return: Concatenated
 */
char *_strcat(char *dest, char *src)
{
	char *concatenated = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (concatenated);
}
