#include "holberton.h"
/**
 *print_diagonal - draws a straight line
 *@n: the number of times the character \
 *
 *Return: void
 */
void print_diagonal(int n)
{
int l;
int m;
for (l = 0; l < n; l++)
{
for (m = 0; m < l; m++)
{
_putchar (' ')
}
_putchar ('\\');
_putchar ('\n');
}
_putchar ('\n');
}
