#include <stdio.h>
/**
 * main - combinations of three
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int f,s,t;

	for (f = 48; f < 58; f++)
	{
		for (s = 49; s < 58; s++)
		{
			for (t = 50; t < 58; t++)
			{
				if (t > s && s > f)
				{
					putchar(f);
					putchar(s);
					putchar(t);
					if (f != 55 || s != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
