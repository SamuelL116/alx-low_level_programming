#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* more headers goes there */

/**
 * main - random number assigned to the variable n each time it is executed
 * The last digit of the number will stored in the variable n
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n);
}
else if (n == 0 )
{
printf("Last digit of %d is %d and is 0\n", n);
}
else (n < 0)
{
printf("Last digit of $d is %d and is less than 6\n", n);
}
return (0);
}