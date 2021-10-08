#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print type
 */
struct convert
{
  char *sym;
  int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _write(char);
int _printf(const char *format, ...);
int format_count(const char *format, print_t format_list[], va_list arg);
int _print_char(va_list);
int _print_string(va_list);
int _print_percent(va_list);

#endif  /* _MAIN_H */
