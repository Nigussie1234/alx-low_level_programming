#include "holberton.h"
/**
 *print_square - print a square followed by a new line
 *@size: the size of a square
 *
 *Return: void
 */
oid print_square(int size)
{
int l = 0;
int m;
if (size > 0)
{
while (l < size)
{
for (m = 0; m < n; m++)
{
_putchar ('#');
}
_putchar ('\n');
l++;
}
}
else
{
_putchar ('\n');
}
}
