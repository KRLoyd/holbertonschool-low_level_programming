#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - creates a file. If the file exists, it is truncated
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 (SUCCESS), -1 (FAILURE)
 **/

int create_file(const char *filename, char *text_content)
{
	int new_file, len;
	ssize_t w_result, c_result;
	mode_t mode;

	if (filename == NULL)
		return (-1);

	mode = S_IRUSR | S_IWUSR;

	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (new_file < 0)
		return (-1);

	if (text_content == NULL)
	{
		c_result = close(new_file);
		if (c_result < 0)
			return (-1);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	w_result = write(new_file, text_content, len);

	c_result = close(new_file);

	if (c_result < 0)
		return (-1);
	if (w_result < 0)
		return (-1);
	return (1);
}
