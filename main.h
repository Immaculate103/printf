#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct convert - Defines a structure for symbols and functions
 * @sym: The operator
 * @f: The function associated
 */
typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_t;

int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, convert_t f_list[], va_list ap);
int _write_char(va_list);
int print_char(va_list);
int print_string(va_list);
int print_percentage(va_list);
#endif
