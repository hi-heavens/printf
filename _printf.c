#include <stdarg.h>

int _printf(const char *format, ...)
{
        char *myString;

        va_list arg;
        va_start(arg, format);

        for(myString = format; *myString != '\0'; myString++)
        {
                while(*myString != '%')
                {
                        putchar(*myString);
                        myString++;
                }
                myString++;
        }
}