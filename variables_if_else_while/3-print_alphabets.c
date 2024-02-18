#include <stdio.h>

/**
 * main - When I was having that alphabet soup, I never thought that it would pay off
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
	
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
	    putchar(letter);
    }

	putchar('\n');

    return (0);
}
