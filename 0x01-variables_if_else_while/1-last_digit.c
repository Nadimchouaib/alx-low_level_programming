#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 lastDigit = n % 10;
	printf("Last digit of %d is ", n);
	if (lastDigit > 5) 
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("0 and is 0\n");
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
