#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: The input character to check
 * Return: 1 0r 0.
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
