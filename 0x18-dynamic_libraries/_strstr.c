#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
    /* Implementation of _strstr */
    /* Locate the first occurrence of the substring needle in the string haystack */
    /* Return a pointer to the beginning of the located substring or NULL if the substring is not found */
    int i, j;
    if (*needle == '\0')
        return (haystack);
    for (i = 0; haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[0]) {
            for (j = 0; needle[j] != '\0'; j++) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            if (needle[j] == '\0')
                return &haystack[i];
        }
    }
    return (NULL);
}
