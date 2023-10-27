#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @index: The given index
 * @n: The given number
 * Return: 1 if it worked, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = (*n | mask);
	return (1);
}
