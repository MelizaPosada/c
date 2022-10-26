#include "main.h"

/**
 * times_table - table
 * Description: prints 9 times table starting with 0
 * Return: Nothing
 */

void times_table(void)
{
	int i;
	int j;
	int n;

	for (j = 0; j <=9; j++)
	{
		
		for (i = 0; i <= 9; i++)
		{
	
			n = i * j;

			if (n < 20 && i > 0)
			{
				_putchar(' ');
			}

			if (n < 20)
			{
				_putchar(n + '0');
			}

			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		
			if (i > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

