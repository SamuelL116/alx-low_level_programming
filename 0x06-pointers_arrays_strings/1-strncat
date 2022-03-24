#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: pointer to destination string.
 * @n: bytes to be concatenated.
 * @dest: pointer to destination string
 *
 * Return: dest string.
char *_strncat(char *dest, char *src, int n)
{
int s, j;

s = 0;
while (dest[s] != '\0')
{
s++;
}
for (j = 0; j < n && src[j] != '\0'; j++, s++)
{
dest[s] = src[j];
}
dest[s] = '\0';
return (dest);
}
