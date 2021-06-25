#include "holberton.h"
/**
 *print_diagonal - draws a straight line
 *@n: the number of times the character \
 *
 *Return: void
 */
void print_diagonal(int n)
{
int l = 0;
int m;
if (n > 0)
{
while (l < n)
{
for (m = 0; m < l; m++)
{
_putchar (' ');
}
_putchar ('\\');
_putchar ('\n');
l++;
}
}
else
{
_putchar ('\n');
}
}
