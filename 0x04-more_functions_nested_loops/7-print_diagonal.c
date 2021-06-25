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
for (l = 0; l < n; l++)
{
_putchar ('\\');
}
_putchar ('\n');
}
