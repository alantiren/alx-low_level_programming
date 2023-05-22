#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    /* Implementation of _memcpy */
    /* Copy n bytes from the memory area src to the memory area dest */
    /* Return a pointer to dest */
unsigned int i;

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    return (dest);
}
