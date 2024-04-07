#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len = 0, i;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}

	while (*b)
	{
		len++;
		b++;
	}

	for (i = 0 ;i < len ;i++)
	{
		b--;
		if (*b != '0' && *b != '1')
			return (0);
		num += (*b - '0') * mult;
		mult *= 2;
	}
	return (num);
}

