#include "main.h"

char *_strcat(char *dest, char *src)
{
    /* Implementation of _strcat */
    /* Concatenate the string from src to dest */
    /* Return a pointer to dest */
 int dest_len = _strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';
    return (dest);
}
