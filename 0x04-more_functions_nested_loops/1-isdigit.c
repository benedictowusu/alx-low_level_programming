#include "main.h"
/**
 * _isdigit - to check if its a digit
 * @c: the integer to be checked
 * return: 1 for a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
