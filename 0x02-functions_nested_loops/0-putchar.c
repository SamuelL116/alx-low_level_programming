#include "main.h"

/**
 * main - entry point
 * Description: program prints _putchar
 * Return: 0 when successul
 */
int main(void)
{
char text[9] = "_putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(text[i]);
i += 1;
}
_putchar('\n');
return (0);
}
