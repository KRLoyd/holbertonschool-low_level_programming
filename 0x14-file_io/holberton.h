#ifndef __HOLBERTON4417__
#define __HOLBERTON4417__
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void file_check(char *file1, char *file2);
void read_error(char *file);
void write_error(char *file);
void close_error(int fd);
#endif /* __HOLBERTON4417__ */
