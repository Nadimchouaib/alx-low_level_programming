#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0.
 */

int main(void)
{
	char Char[] = "_putchar\n";
	int i = 0;

	while (Char[i] != '\0')
	{
		_putchar(Char[i]);
		i++;
	}

	return (0);
}
