#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that duplicates a given string
 * using dynamic memory allocation
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
