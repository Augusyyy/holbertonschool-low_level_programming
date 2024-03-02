#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = *s - '0';
			result = result * 10 + num;
		}
		else
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
