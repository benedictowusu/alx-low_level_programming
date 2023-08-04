#include "main.h"
/**
 * _isupper - checking whether upper or lower
 *@c: the integer to be checked
 * Return: 1 for uppercase, 0 for lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
