#include "main.h"
#include <unistd.h>
/**
* _write_char - Entry point
* Description - A function that writes the input to stdout
* *@c: the function accepts an input saved into n
* Return: Success (0)
*/
int _write(char c)
{
        return (write(1, &c, 1));
}
