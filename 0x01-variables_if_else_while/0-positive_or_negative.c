#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - main block
 *this program will assign a number n to an integer then check if n is positive
 *then check the number if its negative
 *if n our number is neither negative nor positive the output should be zero
 *lastly the program to return 0
 */
/**
 *Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);

return (0);

}
