#include "main.h"

/**
 * append_text_to_file - Function that appends text at file
 * and writes text content to it
 * @filename: The name of the file to be created
 * @text_content: The text content to be written to the file
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int bt_open, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
	}

	bt_open = open(filename, O_WRONLY | O_APPEND);

	if (bt_open == -1)
		return (-1);

	write(bt_open, text_content, text_len);
	close(bt_open);
	return (1);
}
