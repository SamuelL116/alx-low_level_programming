#include "main.h"
#include <stdio.h>

/**
 * _strlen - finds and outputs length of string.
 *@s: pointer to a string
 * Return: int, length of string.
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
{
i++;
s++;
}
return (i);
}
