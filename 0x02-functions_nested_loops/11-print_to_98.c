#include "main.h"
/**
 * print_to_98 - unction that prints all natural numbers from n to 98
 *@n: parameter 1
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 97; i--)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i <= 97; i++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('0' + i / 10);
	_putchar('0' + i % 10);
	_putchar('\n');
}
