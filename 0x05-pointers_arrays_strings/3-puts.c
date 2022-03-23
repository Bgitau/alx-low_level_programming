#include "main.h"
/**
 * _puts - prints string followed by a new line.
 * @str: pointer to string.
 *
 *return: void.
 */
void _puts(char *str)
{
int i;
i = 0;
while(*str!= '\0')
{
putchar(*str);
++i;
++str;
}
putchar('\n');
}
