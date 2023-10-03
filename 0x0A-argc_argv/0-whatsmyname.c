#include <stdio.h>

/**
 * main - function that prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
