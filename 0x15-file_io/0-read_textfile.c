#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints its content
 * @filename: The name of the file to read
 * @letters: The maximum number of characters to read and print
 * Return: The actual number of characters read and printed.
 * Otherwise 0 or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content = NULL;
	ssize_t bt_open, bt_read, bt_write;

	if (filename == NULL)
		return (0);

	content = malloc(sizeof(char) * letters);
	if (!content)
		return (0);

	bt_open = open(filename, O_RDONLY);
	bt_read = read(bt_open, content, letters);
	bt_write = write(STDOUT_FILENO, content, bt_read);

	if (bt_open == -1 || bt_read < 0)
	{
		free(content);
		return (0);
	}

	close(bt_open);
	free(content);

	if (bt_write < 0)
		return (0);

	return (bt_write);
}
