#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main -  program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]))
		{
			num = atoi(argv[i]);
			 sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
