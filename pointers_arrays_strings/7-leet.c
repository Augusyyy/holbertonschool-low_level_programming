#include "main.h"

/**
 * leet - function that changes str to num
 * @n: str
 * Return: n value
 */
char *leet(char *n)
{
	char *p = str;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (*p)
	{
		for (j = 0; j < 10; j++)
		{
			if (*p == s1[j])
			{
				*p = s2[j];
			}
		}
		p++;
	}
	return (str);
}
