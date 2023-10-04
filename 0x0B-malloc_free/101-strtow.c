#include <stdlib.h>
#include "main.h"

/**
 * count_word - function to count the n of words in a string
 * @str: string to evaluate
 * Return: number of words
 */

int count_word(char *str)
{
	int count = 0, w = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			w = 0;
		else if (w == 0)
		{
			w = 1;
			count++;
		}
	}

	return (count);
}
/**
 * **strtow - function to splits a string into words
 * @str: string
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **word, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	word = (char **) malloc(sizeof(char *) * (words + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				word[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	word[k] = NULL;

	return (word);
}



