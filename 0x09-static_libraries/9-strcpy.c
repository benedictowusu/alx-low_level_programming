#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
