#include "main.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @str: ...
  * Return: char value
  */
char *cap_string(char *str)
{
	char *p = str;
	int a = 0;

	while (*p)
	{
		if (a == 0)
		{
			a = 1;
			if (*p >= 'a' && *p <= 'z')
			{
				*p =  *p - 32;
			}
		}
		if (*(p-1) == ' ' || *(p-1) == '\t' || 
		*(p-1) == '\n' || *(p-1) == ',' || 
		*(p-1) == ';' || *(p-1) == '.' ||
		*(p-1) == '!' || *(p-1) == '?' || 
		*(p-1) == '"' || *(p-1) == '(' || 
		*(p-1) == ')' || *(p-1) == '{' || 
		*(p-1) == '}')
		{
			if (*p >= 'a' && *p <= 'z')
			{
				*p =  *p - 32;
			}
		}
		p++;
	}
	return (str);
}
