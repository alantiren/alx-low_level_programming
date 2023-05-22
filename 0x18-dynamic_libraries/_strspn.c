#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    /* Implementation of _strspn */
    /* Calculate the length of the initial segment of s that consists only of characters from accept */
    /* Return the number of characters in the initial segment */
unsigned int count = 0;
    int i, j;
    int found;

    for (i = 0; s[i] != '\0'; i++) {
        found = 0;
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                count++;
                found = 1;
                break;
            }
        }

        if (found == 0)
            break;
    }

    return (count);
}
