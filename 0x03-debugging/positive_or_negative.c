#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - main function for n positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i == 0)
	{
		printf("%d is zero", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	printf("\n");
}
