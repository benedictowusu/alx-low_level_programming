#include <stdio.h>
/**
 * main - combination of numbers
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int firstNumber;
	int secondNumber;

	for (firstNumber = 48; firstNumber <= 56; firstNumber++)
	{
		for (secondNumber = 49; secondNumber <= 57; secondNumber++)
		{
			if (secondNumber > firstNumber)
			{
				putchar(firstNumber);
				putchar(secondNumber);
				if (firstNumber != 56 || secondNumber != 57)
				{
					puchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
