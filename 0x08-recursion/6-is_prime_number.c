#include "main.h"


/**
 * is_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator parameter
 * Return: 1 if n is prime, 0 if not
 */

int recursively_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (recursively_prime(n, n - 1));
}


/**
 * recursively_prime - function verifying if a number is prime recursively
 * @n: number
 * @i: iterator parameter
 * Return: 1 for a prime number, 0 for not
 */

int recursively_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (recursively_prime(n, i - 1));
}
