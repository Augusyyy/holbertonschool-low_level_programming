#include "main.h"

/**
 *_strncpy - function for copying
 *@dest: str1
 *@src: str2
 *@n: bytes
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		*p = *src;
		p++;
		src++;
		if (*src == '\0')
		{
			break;
		}
	}
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (dest);
}
