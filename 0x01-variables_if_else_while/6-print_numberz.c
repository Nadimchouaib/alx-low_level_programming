#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
	}
	putchar ('\n');
	return (0);
}
