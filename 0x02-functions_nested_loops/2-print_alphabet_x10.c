#include "holberton.h"
/**
*prin_alphabet_x10 - prints 10 times lowercase letters
*
*Description: prints 10 times lowercase letters
*
*Return: void
*/
void print_alphabet_x10(void)
{
int x;
int y;
for (x = 0; x <= 9; x++)
{
for (y = 97; y <= 122; y++)
{
_putchar (y);
}
_putchar ('\n');
}
}
