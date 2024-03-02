#include "main.h"

/**
 * _strcat - function for connecting strings
 * @dest: 1st str
 * @src: 2nd str
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
