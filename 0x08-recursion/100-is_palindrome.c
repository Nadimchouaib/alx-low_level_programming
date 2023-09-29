#include "main.h"

int check_if_pal(char *s, int i, int length);
int lengh_recursion(char *s);

/**
 * is_palindrome - function to checks if a string is a palindrome
 * @s: string parameter to be reversed
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_if_pal(s, 0, lengh_recursion(s)));
}

/**
 * lengh_recursion - function that returns the length of a string
 * @s: string parameter
 * Return: length of the string
 */

int lengh_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + lengh_recursion(s + 1));
}

/**
 * check_if_pal - function to checks the characters
 * recursively for palindrome
 * @s: string parameter
 * @i: iterator parameter
 * @length: length parameter of the string
 * Return: 1 if palindrome, 0 if not palindrome
 */

int check_if_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_if_pal(s, i + 1, length - 1));
}
