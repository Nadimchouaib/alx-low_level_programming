#include "main.h"

/**
 * print_rev - function that prints a string, in revers
 * @s: parameter to be printed
 */

void print_rev(char *s)
{
	int i;
	int lent = 0;

	for (i = 0; s[i] != '\0'; i++)
		lent++;
	for (i = lent - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
