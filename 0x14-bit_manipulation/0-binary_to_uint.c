#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: Pointing to a string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_Val = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		converted_Val = converted_Val << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			converted_Val = converted_Val | 1;
		b++;
	}
	return (converted_Val);
}
