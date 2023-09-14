#include <stdio.h>

/**
 * main - program to find first 50 fibonacci number 
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int par1 = 1;
	unsigned long int par2 = 2;
	int i;
	unsigned long int par3;

	printf("%lu, ", par1);
	for (i = 1; i < 50 ; i++)
	{
		printf("%lu, ", par2);
		par3 = par1 + par2;
		par1 = par2;
		par2 = par3;
		if (i < 49 )
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

