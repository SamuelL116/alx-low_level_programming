#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: person's name
 * @f: input pointer function and execute it
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0);
f(name);
}
