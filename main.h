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
typedef struct print
{
  char *t;
  int (*f)(va_list);
};

typedef struct print print_t;

int _putchar(char c);
int _write(char);
int _printf(const char *format, ...);

#endif  /* _MAIN_H */
