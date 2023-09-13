#include "main.h"
/**
 * print_to_98 - unction that prints all natural numbers from n to 98
 *@n: parameter 1
 */
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
                                _putchar('0' + i / 100);
                                _putchar('0' + (i % 100) / 10);
				_putchar('0' + (i % 100) % 10);
			}
			else if (i >= 10 && i <  100)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' + i);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				j = -i;
				if (j >= 10)
			       	{
					_putchar('-');
				       	_putchar('0' + j / 10);
					_putchar('0' + j % 10);
				}
				else
				{
					_putchar('-');
					_putchar('0' + j);
				}
			}
			if (i >= 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
			{
				_putchar('0' + i);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			
		}
	}
	_putchar('\n');
}
