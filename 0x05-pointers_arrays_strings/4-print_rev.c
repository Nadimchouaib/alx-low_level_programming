#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: parameter to be printed
 * Return: reverset
 */

void print_rev(char *s)
{
	int i;
	int lent;

	lent = _strlen(s);
	for (i = lent - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
