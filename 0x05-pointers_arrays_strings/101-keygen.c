#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInRange(int min, int max)
{
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

void generatePassword(char *password, int length)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charsetSize = sizeof(charset) - 1;

	for (int i = 0; i < length; i++)
	{
		int index = randomInRange(0, charsetSize);
		password[i] = charset[index];
	}
	password[length] = '\0';
}
