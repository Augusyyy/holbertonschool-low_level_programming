#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	char p1, p2;

	do {
		p1 = *s1;
		p2 = *s2;
		s1++;
		s2++;
		if (p1 == '\0')
		{
			return (p1 - p2);
		}
	} while (p1 == p2);
	return (p1 - p2);
}
