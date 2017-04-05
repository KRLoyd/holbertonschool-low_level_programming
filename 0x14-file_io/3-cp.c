#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUFSIZE 1024
/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Description: copies the content of one file to another.
 * Return: 0 (SUCCESS)
 **/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t fdf_r, fdt_w, fdf_c, fdt_c;
	char *buffer;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_check(argv[1], argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		read_error(argv[1]);
	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, mode);
	if (fd_to < 0)
		return (-1);

	buffer = malloc(sizeof(char) * BUFSIZE);
	if (buffer == NULL)
		return (-1);
	fdf_r = read(fd_from, buffer, BUFSIZE);
	if (fdf_r < 0)
		read_error(argv[1]);
	fdt_w = write(fd_to, buffer, fdf_r);
	if (fdt_w < 0)
		write_error(argv[2]);
	fdf_c = close(fd_from);
	if (fdf_c < 0)
		close_error(fd_from);
	fdt_c = close(fd_to);
	if (fdt_c < 0)
		close_error(fd_to);
	free(buffer);
	return (0);
}

/**
 * file_check - checks if files are NULL
 * @file1: first file
 * @file2: second file
 **/
void file_check(char *file1, char *file2)
{
	if (file1 == NULL)
		read_error(file1);
	if (file2 == NULL)
		read_error(file2);
}
/**
 * read_error - read() error handling
 * @file: failing file
 **/
void read_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * write_error - write() error handling
 * @file: file failing
 **/
void write_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);

}
/**
 * close_error - close() error handling
 * @fd: failing file descriptor
 **/
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);

}
