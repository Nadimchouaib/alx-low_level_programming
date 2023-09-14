#include <stdio.h>

/**
 * main - program to prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, next;
	unsigned long int count;

	printf("%lu, %lu, ", n1, n2);

	for (count = 3; count <= 98; count++)
	{
		next = n1 + n2;
		if (count < 98)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}
		n1 = n2;
		n2 = next;
	}
	return (0);
}

