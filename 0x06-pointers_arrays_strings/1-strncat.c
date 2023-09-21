#include "main.h"

/**
 * *_strnca -  function that concatenates two strings
 * @dest: input value1
 * @src: input value2
 * @n: input value3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
