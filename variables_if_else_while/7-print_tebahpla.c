#include <stdio.h>

/**
 * main - 7-print_tebahpla
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	signed int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
