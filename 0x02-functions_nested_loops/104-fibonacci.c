#include <stdio.h>

/**
 * main - program to prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */


int main(void)
{
	int n1 = 1, n2 = 2, next;
	int count = 3;

	printf("%d, %d, ", n1, n2);

	for (count; count <= 98; count++)
	{
		next = n1 + n2;
		if (count < 98)
		{
			printf("%d, ", next);
		}
		else
		{
			printf("%d\n", next);
		}
		n1 = n2;
		n2 = next;
	}
	return (0);
}
