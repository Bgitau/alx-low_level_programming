#include "main.h"

/**
 * *string_tuopper - changes the letters of the string to uppercase
 * @c: string pointer
* return: c
 */

char *string_toupper(char *c)
{
int a;

for (a = 0; c[a] != '\0'; a++)
{
if (c[a] > 96 && c[a] < 123)
{
c[a] -= 32;
}
}
return (c);
}
