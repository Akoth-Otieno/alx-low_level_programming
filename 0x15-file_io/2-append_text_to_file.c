#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of
 * a file.
 * @filename: the name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, i;
	char *buffer;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		;

	buffer = malloc(i * sizeof(char));

	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	size = write(fd, text_content, i);

	if (size == -1)
		return (-1);

	close(fd);

	free(buffer);
	return (1);
}
