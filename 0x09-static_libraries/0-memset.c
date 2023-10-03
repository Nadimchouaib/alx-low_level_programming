#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: par1
 * @b: par2
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
