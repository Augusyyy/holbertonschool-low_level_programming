#include "main.h"

/**
* _strncat - function for connecting
* @dest: str1
* @src: str2
* @n:bytes
* Return: dest
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
