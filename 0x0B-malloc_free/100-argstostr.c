#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all
 * the arguments into a single string
 * @ac: argument count (number of arguments)
 * @av: array of argument strings
 * Return: A pointer to a new string containing the
 * concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	result = malloc(sizeof(char) * l + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		result[k] = av[i][j];
		k++;
	}
	if (result[k] == '\0')
	{
		result[k++] = '\n';
	}
	}
	return (result);
}
