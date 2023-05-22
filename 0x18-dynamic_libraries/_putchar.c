#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    /* Implementation of _putchar */
    return (write(1, &c, 1));
}
