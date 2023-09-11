#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "";
	int i;

	for (i = 'a' ; i < 'z'; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
