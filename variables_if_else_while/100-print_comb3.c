#include <stdio.h>

/**
 * main - C program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a, b;

    for (a = '0'; a < '9'; a++)
    {
        for (b = a + 1; b <= '9'; b++)
        {
            putchar(a);
            putchar(b);

            if (a == '8' && b == '9'){
                continue;
            }
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}}
