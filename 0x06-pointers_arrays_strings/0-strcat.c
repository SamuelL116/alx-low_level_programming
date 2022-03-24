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
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while(src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
