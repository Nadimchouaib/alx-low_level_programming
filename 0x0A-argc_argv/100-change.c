#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int i, num;
	int coins[] = {25, 10, 5, 2, 1};
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		result += num / coins[i];
		num %= coins[i];
	}
	printf("%d\n", result);
	return (0);
}

