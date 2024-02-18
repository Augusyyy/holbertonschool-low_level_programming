#include <stdio.h>

/**
 * main - 6. Numberz
 *
  *
 * Return: Always 0.
 */
int main(void) {
    signed int a;

    for(a = '0'; a <= '9'; a++){

        putchar(a);
        if(a != '9'){
            putchar(',');
            putchar(' ');
        }
    }
    
    putchar('\n');

    return (0);
}
