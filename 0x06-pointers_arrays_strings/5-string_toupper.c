#include "main.h"
/**
 * string_toupper - function to change lowercase to upper
 * @str: pointer
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
