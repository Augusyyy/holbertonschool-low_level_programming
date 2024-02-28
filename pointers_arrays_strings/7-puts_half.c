#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0;
	char *p = str;
	int half;
	int index = 0;

	while (*p)
	{
		len++;
		p++;
	}
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len + 1) / 2;
	}
	while (*str)
	{
		if (index >= half)
		{
			_putchar(*str);
		}
		str++;
		index++;
	}
	_putchar('\n');
}
