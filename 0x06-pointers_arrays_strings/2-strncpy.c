#include "main.h"

/**
 * *_strncpy -  function that copies a string.
 * @dest: par1
 * @src: part2
 * @n: part3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
