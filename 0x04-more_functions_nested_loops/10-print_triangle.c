#include "holberton.h"
/**
 *print_triangle - prints a triangle followed by a new line
 *@size: the size of a triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
int l;
int m;
if (size > 0)
{
for (l = 0; l < size; l++)
{
for (m = 0; m < size; m++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
