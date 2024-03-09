#include "main.h"
/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 * Return: A pointer to the destination buffer @dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *p = dest;
	const unsigned char *q = src;

	for (index = 0; index < n; index++)
		p[index] = q[index];

	return (dest);
}
