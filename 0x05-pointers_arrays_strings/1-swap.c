#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 *
 * @a: pointer to an int
 * @b: pointer to another int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
