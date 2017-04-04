#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: text file to read and print
 * @letters: number of letters from the file to read and print
 *
 * Return: number of letters read and printed (SUCCESS)
 * 0 if file cannot be opened or read,
 * or if write fails or doesn't print the number of expected bytes (FAILURE)
 * -1 if malloc fails to create space
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *print_this;
	ssize_t r_result, w_result, c_result;

	if (filename == NULL)
		return (0);
	print_this = malloc(sizeof(char) * letters);
	if (print_this == NULL)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(print_this);
		return (0);
	}
	r_result = read(fd, print_this, letters);
	if (r_result < 0)
	{
		free(print_this);
		return (0);
	}
	w_result = write(STDOUT_FILENO, print_this, r_result);
	if (w_result < 0)
	{
		free(print_this);
		return (0);
	}
	c_result = close(fd);
	if (c_result < 0)
	{
		free(print_this);
		return (0);
	}
	free(print_this);
	return (r_result);
}
