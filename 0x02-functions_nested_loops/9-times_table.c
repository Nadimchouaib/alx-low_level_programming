#include "main.h"

/**
 * times_table - function that prints the 9 times table.
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (j != 0)
			{
				_putchar(' ');
			}
			if (result < 10)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (j < 9)
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
