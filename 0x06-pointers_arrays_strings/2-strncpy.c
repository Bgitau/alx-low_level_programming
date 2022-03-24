#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy a string starting from index 0 of 'dest'.
 * @dest: string
 * @src: string
 * @n: number of chars to copy over.
 * Return: 'dest' edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
