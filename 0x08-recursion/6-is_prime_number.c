#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 *
 * Return: int
 */
int prime2(int a, int b)
{
if (a == b)
return (1);
else if (a % b == 0)
return (0);
return (prime2(a, b + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: input number
 *
 * Return: int
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}
