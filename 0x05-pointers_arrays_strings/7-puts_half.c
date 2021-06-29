#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int i, n, l;

i = 0;
while (str[i] != '\0')
{
i++;
}
l = i;
if (l % 2 == 0)
{  
n = l / 2;
while (n <= l)
{
_putchar (str[n]);
n++;
}
}
else if
{
n = (l - 1) / 2;   
while (n <= l)
{
_putchar (str[n]);
n++;
}
}
_putchar('\n');
}
