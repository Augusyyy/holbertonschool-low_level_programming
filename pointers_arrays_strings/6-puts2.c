#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int len = 0;

	while (*str)
	{
		if (len % 2 == 0)
		{
			_putchar(*str);
		}
		len++;
		str++;
	}
	_putchar('\n');
}
