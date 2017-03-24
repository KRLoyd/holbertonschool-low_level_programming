#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct _find_type - find the type of printf to use
 * @c: character to look for
 * @f: printf function to use
 */
typedef struct find_type
{
	char *c;
	void (*f)();
} find_type;
void print_char(char *sep, va_list alist);
void print_char(char *sep, va_list alist);
void print_char(char *sep, va_list alist);
void print_char(char *sep, va_list alist);
#endif /* VAR_FUNC_H */
