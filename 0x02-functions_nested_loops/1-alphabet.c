#include "holberton.h"
/**
*print_alphabet - prints lowercase letters
*
*Description: prints lowercase letters
*
*Return: 0
*/
void print_alphabet(void)
{
int j;
for (j = 97; j <= 122; j++)
{
_putchar (j);
}
_putchar ('\n');
}
