#include "holberton.h"
/**
 *print_square - print a square followed by a new line
 *@size: the size of a square
 *
 *Return: void
 */
void print_square(int size)
{
int l = 0;
if (size > 0)
{
while (l < size)
{
_putchar ('#');
l++;
}
}
else
{
_putchar ('\n');
}
}
