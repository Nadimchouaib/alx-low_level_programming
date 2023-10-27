#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: Pointer of an unsigned long int
 * @index: Index of the bit
 * Return: 1 for succes, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp;

	if (index > 63)
		return (-1);

	tmp = 1 << index;

	if (*n & tmp)
		*n ^= tmp;
	return (1);
}
