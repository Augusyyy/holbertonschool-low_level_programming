#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
