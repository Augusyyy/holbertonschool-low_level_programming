#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int x, y, sum;
	
	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				sum = x * y;
				if (y == 0)
				{
					_putchar(sum + '0');
				}
				else if (sum <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(sum + '0');
				}
				else if (sum <= 99)
				{
					_putchar(' ');
					_putchar((sum / 10) + '0');
					_putchar((sum % 10) + '0');
				}
				else
				{
					_putchar((sum / 100) + '0');
					_putchar((sum / 10) % 10 + '0');
					_putchar((sum % 10) + '0');
				}
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
