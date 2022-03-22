#include "main.h"
#include "stdio.h"

/**
 * _puts - Prints a string
 * @str: pointer to char
 * Return: 0
 */

void _puts(char *str)
{
int i;

i = 0;
while (*str != '\0')
{
_putchar(*str);
i++;
str++;
}
_putchar('\n');
}
