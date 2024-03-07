#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: The string to be measured.s
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
