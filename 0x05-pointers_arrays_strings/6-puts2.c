#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;
	char *j = str;
	int count = 0;

	while (*j != '\0')
	{
		j++;
		count++;
	}
	for (i = 0 ; i <= count - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);		}
	}
	_putchar('\n');
}
