#include <stdio.h>
#include "main.h"

/**
 * *rot13 - encoder rot13
 * @s: pointer to param
 * Return: *s
 */

char *rot13(char *s)
{
	int i, j;
	char string_data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == string_data[j])
			{
				s[i] = rot_data[j];
				break;
			}
		}
	}
	return (s);
}
