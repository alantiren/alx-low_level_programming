#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    /* Implementation of _strncpy */
    /* Copy at most n characters from src to dest */
    /* Return a pointer to dest */
   int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return (dest)
}
