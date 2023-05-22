#include "main.h"

int _isdigit(int c)
{
    /* Implementation of _isdigit */
    /* Return 1 if c is a digit, 0 otherwise */
 if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
