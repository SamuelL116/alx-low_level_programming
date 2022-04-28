#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string input
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int c = 0, i = 0, mul = 1;

if (!b)
{
return (0);
}

while (b[i])
{
while (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
while (i > 0)
{
if (b[i - 1] == '1')
{
c += mul;
}
mul *= 2;
i--;
}
return (c);
}
