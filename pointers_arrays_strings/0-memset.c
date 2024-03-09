#include "main.h"

/**
 *_memset - fill the memory with values
 *@s: address
 *@b: value
 *@n: number of bytes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
