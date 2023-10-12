#include "variadic_functions.h"

/**
 * print_numbers - function that prints all given number parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(arg, int));
		else if (separator && i == 0)
			printf("%d", va_arg(arg, int));
		else
			printf("%s%d", separator, va_arg(arg, int));
	}
	va_end(arg);
	printf("\n");
}
