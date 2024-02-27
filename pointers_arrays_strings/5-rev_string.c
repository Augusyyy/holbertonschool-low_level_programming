#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0;
	char *p = s;
	char *q = s;
	char temp;

	while (*q)
	{
		len++;
		q++;
	}
	q--;
	while (len > 1)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
		len = len - 2;
	}
}
