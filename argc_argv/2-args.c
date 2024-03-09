#include <stdio.h>

/**
 * main - a program that prints all arguments
 * @argc: arguement
 * @argv: array
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
