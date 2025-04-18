#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text content to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int descripteur_f;
int len = 0;
int written;

	if (filename == NULL)
		return (-1);

	descripteur_f = open(filename, O_WRONLY | O_APPEND);
	if (descripteur_f == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(descripteur_f);
			return (1);
	}

	while (text_content[len])
		len++;

	written = write(descripteur_f, text_content, len);
	if (written == -1 || written != len)
	{
		close(descripteur_f);
		return (-1);
	}

	close(descripteur_f);
	return (1);
}
