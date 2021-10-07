#include "main.h"
/**
 * char_count - Entry point
 * Description - A function that receives some parameters
 * and print a formatted string
 * *@format: the function accepts an input saved into format
 * *@format_list: the function accepts an input saved into format_list
 * *@arg: the function accepts an input saved into arg
 * Return: Total count of the printed character
 */
int format_count(const char *format, print_t format_list[], va_list arg)
{
        int i;
        int j;
        int count = 0;

        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] == '%')
                {

                }
                else
                {
                        _write(format[i]);
                        count++;
                }
        }
        return (count);
}
