#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "";
	int i;

	for (i = 'a' ; i <= 'z'; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}