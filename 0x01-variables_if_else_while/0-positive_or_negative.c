#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function to determines if a number is positive, negative or zero.
 * 
 * Return : return 0
 */
int main (void)
{
	int n;
	srand(time (0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive", n);
	}
	else if (n==0)
	{
		printf("%d is zero", n);
	}
	else if (n<0)
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}
