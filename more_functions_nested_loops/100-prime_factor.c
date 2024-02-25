#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long liugod = 612852475143;
	long maxPrimeResult = 0;
	long a;
	
	while (liugod > 1)
	{
		for (a = 2;a <= liugod; a++)
		{
			if (liugod % a == 0)
			{
				liugod = liugod/a;
				if (a > maxPrimeResult)
				{
					maxPrimeResult = a;
				}
				break;
			}
		}
	}
	printf("%ld\n", maxPrimeResult);
	return (0);
}
