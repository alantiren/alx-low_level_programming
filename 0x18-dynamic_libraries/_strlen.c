#include "main.h"

int _strlen(char *s)
{
    /* Implementation of _strlen */
    /* Return the length of the string */
  int length = 0;
    while (s[length] != '\0')
        length++;
    return (length);
}
