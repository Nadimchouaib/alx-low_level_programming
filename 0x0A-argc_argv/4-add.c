#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return (sign * num);
}

/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0  or 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

