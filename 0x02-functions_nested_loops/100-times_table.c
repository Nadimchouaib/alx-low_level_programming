#include "main.h"

/**
 * print_times_table - function that prints n x n matrix.
 * @n: given number
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (result < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (result > 99 && j != 0)
				{
					_putchar(' ');
				}
				else if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (result < 10)
				{
					_putchar('0' + result);
				}
				else if (result >= 100)
				{
					_putchar('0' + result / 100);
					_putchar('0' + (result % 100) / 10);
					_putchar('0' + (result % 100) % 10);
				}
				else
				{
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				if (j < n)
				{
					_putchar(',');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
