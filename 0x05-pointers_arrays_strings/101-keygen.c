#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main -  program that generates random valid passwords
 * Return: =
 */

int main(void)
{
	int i, n, sum = 0;
	int passwords[100];

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passwords[i] = rand() % 78;
		sum += (passwords[i] + '0');
		putchar(passwords[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
