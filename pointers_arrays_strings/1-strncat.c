#include "main.h"

/**
* _strncat - function for connecting
* @dest: str1
* @src: str2
* @n:bytes
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	for (int i = 0; i < n && *src; ++i)
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (dest);
}
