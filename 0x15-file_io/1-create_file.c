#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file to create.
 * @text_content: the string to write to file.
 * Return: Always 1 (Success)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, size, i;
	char *buffer;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);

		if (fd == -1)
			return (-1);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;
	buffer = malloc(i * sizeof(char));

	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	size = write(fd, text_content, i);
	if (size == -1)
		return (-1);
	close(fd);
	free(buffer);
	return (1);

}
