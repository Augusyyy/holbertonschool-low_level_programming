#include <stdio.h>

/**
 * main - - 2-print_alphabet.c: main -2-print alphabet.c
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
