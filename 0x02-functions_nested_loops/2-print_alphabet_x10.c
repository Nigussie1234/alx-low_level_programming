#include "holberton.h"
/**
*main - prints 10 times lowercase letters
*
*Description: prints 10 times lowercase letters
*
*Return: 0 (success)
*/
void print_alphabet_×10(void)
{
int x;
int y;
for (x =0; x <= 9; x++)
{
for (y = 97; y <= 122; y++)
{
_putchar (y);
}
_putchar ('\n');
}
}