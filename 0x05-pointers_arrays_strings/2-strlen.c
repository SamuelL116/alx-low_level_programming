#include "main.h"
#include <stdio.h>

/**
 * _strlen(char *s);
 *@s: pointer to a string
 * Return: int
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
