#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: file to append
 * @text_content: NULL terminating string to add at the end of the file
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t w_result, c_result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		c_result = close(fd);
		if (c_result < 0)
			return (-1);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;
	w_result = write(fd, text_content, len);
	c_result = close(fd);
	if (c_result < 0 || w_result < 0)
		return (-1);
	return (1);
}
