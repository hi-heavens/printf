#ifndef PRINT_F_ALX
#define PRINT_F_ALX

#include <limits.h>
#include <unistd.h>
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

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int _write(char);
int _printf(const char *format, ...);
int format_count(const char *format, print_t format_list[], va_list arg);
int _print_char(va_list);
int _print_string(va_list);
int _print_percent(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
/*extra functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif /** PRINT_F_ALX **/
