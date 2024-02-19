#include <stdio.h>

/**
 * main - 8-Hexadecimal
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	signed int a;
	signed int c;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
