#include "function_pointers.h"

/**
 * print_name - print name using pointer to function
 * @name: name to be printed
 * @f: pointer to function
 * Return: 1 if name is null
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (1);
	f(name);
}
