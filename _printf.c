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
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"b", print_binary},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
/*calling parser function*/
printed_chars = parser(format, f_list, arg_list);
va_end(arg_list);
return (printed_chars);
}
