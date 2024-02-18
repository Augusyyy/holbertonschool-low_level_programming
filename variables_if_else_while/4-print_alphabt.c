#include <stdio.h>

/**
 * main - 4. alphABET
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
	{
	putchar(letter);
	}
	}
	putchar('\n');

	return (0);
}
