#include "main.h"
/**
 * jack_bauer - every minute
 * starting from 00
 */
void jack_bauer(void)
{
	int day = 0;
	int minute;

	while (day < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar((day / 10) + '0');
			_putchar((day % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		day++;
	}
}
