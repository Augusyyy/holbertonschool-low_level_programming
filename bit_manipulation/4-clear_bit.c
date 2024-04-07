#include "main.h"
/**
 * clear_bit - Set a bit at a given index to 0.
 * @n: A pointer to the digit.
 * @index: The index to set the value at.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}

