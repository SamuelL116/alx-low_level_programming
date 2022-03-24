#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: pointer to array
 * @n: number of elements of an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int swap, begin, end;

begin = 0;
end = n - 1;
while (begin < end)
{
swap = *(a + begin);
*(a + begin) = *(a + end);
*(a + end) = swap;
begin++;
end--;
}
}
