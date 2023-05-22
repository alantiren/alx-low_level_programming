#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    /* Implementation of _strpbrk */
    /* Search the string s for any character from the string accept */
    /* Return a pointer to the first matching character or NULL if no match is found */
  int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j])
                return &s[i];
        }
    }

    return (NULL);
}
