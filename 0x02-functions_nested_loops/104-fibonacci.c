#include <stdio.h>

/**
 * main - program to prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long long  n1 = 1, n2 = 2, next;
	unsigned long long  count;

	printf("%llu, %llu, ", n1, n2);

	for (count = 3; count <= 98; count++)
	{
		next = n1 + n2;
		if (count < 98)
		{
			printf("%llu, ", next);
		}
		else
		{
			printf("%llu\n", next);
		}
		n1 = n2;
		n2 = next;
	}
	return (0);
}
