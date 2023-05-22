#include "main.h"

int _isalpha(int c)
{
/* Implementation of _isalpha */
/* Return 1 if c is an alphabetic character, 0 otherwise */
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
