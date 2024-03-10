#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: If concatenation fails - NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	dest = malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		dest[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		dest[concat_index++] = s2[index];

	return (dest);
}
