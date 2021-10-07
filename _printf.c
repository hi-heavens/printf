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
	int printed_chars;
	print_t format_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
}
