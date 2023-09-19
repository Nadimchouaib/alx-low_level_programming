#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: parameter
 */

void rev_string(char *s)
{
	int i;
	int lent = 0;

	for (i = 0; s[i] != '\0'; i++)
		lent++;
	for (i = 0; i < lent / 2; i++)
	{
		char revers;

		revers = s[i];
		s[i] = s[lent - 1 - i];
		s[lent - 1 - i] = revers;
	}
}
