#include "main.h"

int _isupper(int c)
{
    /* Implementation of _isupper */
    /* Return 1 if c is an uppercase letter, 0 otherwise */
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
