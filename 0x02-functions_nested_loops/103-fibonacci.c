#include <stdio.h>

/**
 * main - program to prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int par1 = 1;
	unsigned long int par2 = 2;
	unsigned long int par3;
	unsigned long int sum = 0;

	while (par1 <= 4000000)
	{
		if (par1 % 2 == 0)
		{
			sum += par1;
		}
		par3 = par1 + par2;
		par1 = par2;
		par2 = par3;
	}

	printf("%lu\n", sum);
	return (0);
}
