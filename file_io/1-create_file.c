#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: Text content to write to the file.
 *
 * This function creates a file with the given filename and writes the provided
 * text content to it. If the file already exists, it is truncated.
 * If text_content
 * is NULL, an empty file is created. The function returns 1 on success
 * and -1 on failure.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{

		result = write(fd, text_content, strlen(text_content));
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
