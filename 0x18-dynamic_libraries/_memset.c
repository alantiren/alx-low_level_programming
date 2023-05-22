#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    /* Implementation of _memset */
    /* Fill the first n bytes of the memory area pointed to by s with the constant byte b */
    /* Return a pointer to the memory area s */
 unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;

    return (s);
}
