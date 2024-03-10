#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dest;
	int len = 0;
	char *p = str;
	int i;

	if (str == NULL)
		return (NULL);

	while (*p)
	{
		len++;
		p++;
	}
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; i < len; ++i)
	{
		dest[i] = str[i];
	}
	return (dest);
}
