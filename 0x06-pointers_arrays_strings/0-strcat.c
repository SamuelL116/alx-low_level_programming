#include "main.h"

/**
 * *_strcat(char *dest, char *src) - concatenates two strings
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int length, j;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
