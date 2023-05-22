#include "main.h"

int _islower(int c)
{
/* Implementation of _islower */
/* Return 1 if c is a lowercase letter, 0 otherwise */
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
