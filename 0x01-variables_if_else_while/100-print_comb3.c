#include <stdio.h>
/**
 * main - combination of numbers
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	int firstNumber=48;
	int secondNumber=49;

	while (firstNumber <=56)
	{
		if(secondNumber<=57)
		{
			if (secondNumber > firstNumber)
			{
				putchar(firstNumber);
				putchar(secondNumber);
				firstNumber++;
				secondNumber++;
				if((firstNumber != 56) || (secondNumber != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
