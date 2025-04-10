#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int descripteur_f;
int len = 0;
int written;

	if (filename == NULL)
		return (-1);

	descripteur_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descripteur_f == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(descripteur_f, text_content, len);
		if (written == -1 || written != len)
		{
			close(descripteur_f);
			return (-1);
		}
	}
	close(descripteur_f);
	return (1);
}
