#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	int len = 0;
	while (*str)
	{
		_putchar(*str);
		len++;
		str++;
	}
	_putchar(“\n”);
	return(void);
}
