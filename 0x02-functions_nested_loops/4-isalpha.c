#include "main.h"
/**
 * _isalpha - checking for alphabets
 *
 * Return: 1(alpabet), else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
