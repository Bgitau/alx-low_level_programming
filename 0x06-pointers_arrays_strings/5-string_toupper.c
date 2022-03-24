#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *@c: pointer to string.
 *
 *return c
 */
char *string_toupper(char *c)
{
int length;

length = 0;

while (c[length] != '\0')
{
if (c[length] >= 97 && c[length] <= 122)
{
c[length] = c[length] - 32;
}
length++;
}
return (c);
}
