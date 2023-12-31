#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural square
 * @n: number
 * @i: iterator parameter
 * Return: the natural square of n
 */
int _sqrt_recursive(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursive(n, 0));
}

/**
 * _sqrt_recursive - recursive function to find the natural
 * square root of a number
 * @n: number
 * @i: iterator parameter
 * Return: the resulting square root
 */

int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursive(n, i + 1));
}
