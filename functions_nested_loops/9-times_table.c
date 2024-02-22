#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x;
	int y;
	int sum;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			sum = x * y;
			if (y == 0)
			{
				_putchar(sum + '0');
			}
			else if (sum <= 9)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
