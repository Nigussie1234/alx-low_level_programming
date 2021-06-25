#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers (0 to 14)
 *
 *
 *Return: void
 */
void more_numbers(void)
{
int x, n, r, l;
n = '0';
r = 0;
l = '9';
for (x = 0; x < 10; x++)
{
while (r < 2)
{
while (n <= l)
{
if (l == '4')
_putchar ('1');
_putchar (n);
n++;
}
r++;
l = '4';
n = '0';
}
_putchar ('\n');
r = 0;
n = '0';
l = '9';
}
}
