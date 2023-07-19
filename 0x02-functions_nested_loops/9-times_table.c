#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int x, y, z;
	x = 0, y = 0;

	if (x < 10)
	{
		if (y < 10)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(y + '0');
			}
			if (z < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			y++;
		}
		x++;
		_putchar('\n');
	}

}


