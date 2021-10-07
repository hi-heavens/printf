#include <stdarg.h>
#include "main.h"
/**
* _printf - Entry point
* Description - A function that produces output
* *@format: the function accepts an input saved into
* format (Character string)
* Return: Total count of the printed character
*/
int _printf(const char *format, ...)
{
	int char_count;
	print_t format_list[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{NULL, NULL}
	};

	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	char_count = format_count(format, format_list, arg);

	va_end(arg);

	return (char_count);
}
