#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 *
 * Return: int
 */

int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}

/**
 * getNumSqr - function that gets de num of sqroot
 *
 * @num: input number
 * @i: Counter variable
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
