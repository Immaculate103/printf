#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters
 * to print a formatted string
 * @format: A string containing all the desired characters
 * Return: The number of characters printed
 */
int _printf(const char *format, ...);
{
	int printed_chars;
	convert_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	printed_chars += va_arg(ap, format);
	va_end(ap);
	return (printed_chars);
}
