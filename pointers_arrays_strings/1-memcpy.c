#include "main.h"

/**
 * _memcpy - copies from src to dest
 * @src: first address
 * @dest: second
 * @n: count of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
