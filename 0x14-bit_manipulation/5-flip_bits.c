#include "main.h"

/**
 * flip_bits - Function that returns the needed number
 * of bits to flip to get from one number to another
 * @n: Given number 1
 * @m: Given number 2.
 * Return: Number of flip in the Input numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int result = n ^ m;
	unsigned int ncount = 0;

	while (result > 0)
	{
		ncount+= result & 1;
		result >>= 1;
	}
	return (ncount);
}
