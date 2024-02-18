#include <stdio.h>

/**
 * main - - 2-print_alphabet.c: C program that prints the alphabet in lowercase, followed by a new line, using only the putchar function exactly twice.

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
