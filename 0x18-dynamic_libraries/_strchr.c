#include "main.h"

char *_strchr(char *s, char c)
{
    /* Implementation of _strchr */
    /* Locate the first occurrence of character c in the string s */
    /* Return a pointer to the matched character or NULL if the character is not found */
  while (*s != '\0') {
        if (*s == c)
            return (s);
        s++;
    }

    if (c == '\0')
        return s;

    return (NULL);
}
