#include "main.h"

/**
 * *_strpbrk -  function that searches a string
 * @s: par1
 * @accept: par2
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
