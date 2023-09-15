#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of a given number
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long int LPF = 0;
	long int i;

	while (num % 2 == 0)
	{
		LPF = 2;
		num /= 2;
	}
	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			LPF = i;
			num /= i;
		}
	}
	if (num > 1)
	{
		LPF = num;
	}
	printf("%ld\n", LPF);
	return (0);
}
