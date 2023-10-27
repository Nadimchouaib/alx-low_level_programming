#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int numt = 1;
	char *bt_ptr;

	bt_ptr = (char *) &numt;
	return ((int)*bt_ptr);
}
