#include "main.h"
/**
* _print_char - Entry point
* Description - A function that print characters
* *@list: the function accepts list of arguments saved into list
* Return: Success (1)
*/
int _print_char (va_list list)
{
        _write(va_arg(list, int));      
        return (1);
}
/**
* _print_string - Entry point
* Description - A function that print a string
* *@list: the function accepts list of arguments saved into list
* Return: character count
*/
int _print_string(va_list list)
{
        int i;
        char *str;

        str = va_arg(list, char *);
        if (str == NULL)
                str = "(null)";
        for (i = 0; str[i] != '\0'; i++)
                _write(str[i]);
        return (i);
}
/**
* _print_percent - Entry point
* Description - A function that print a symbol
* *@list: the function accepts list of arguments saved into list
* Return: character count
*/
int _print_percent(__attribute__((unusued))va_list list)
{
        _write('%');
        return (1);
}
