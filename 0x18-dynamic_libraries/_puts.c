#include "main.h"

void _puts(char *s)
{
    /* Implementation of _puts */
    /* Print the string to the standard output */
 int i = 0;
    while (s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');
}
