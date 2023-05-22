#include "main.h"

int _strcmp(char *s1, char *s2)
{
    /* Implementation of _strcmp */
    /* Compare two strings */
    /* Return an integer less than, equal to, or greater than 0 */
int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] < s2[i])
            return (-1);
        else if (s1[i] > s2[i])
            return (1);
    }
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else if (s1[i] == '\0')
        return (-1);
    else
        return (1);
}
