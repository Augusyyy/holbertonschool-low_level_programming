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
	char *array;
	int  len1 = 0, len2 = 0;
	char *p = s1;
	char *q = s2;
	int i;
	
	while (*p)
	{
		len1++;
		p++;
	}
	while (*q)
	{
		len2++;
		q++;
	}
	array = malloc(len1 + len2 + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		array[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		array[len1 + i] = s2[i];
	}
	return (array);
}
