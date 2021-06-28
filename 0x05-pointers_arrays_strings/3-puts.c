#include "holberton.h"

/**
 * _puts - prints a string
 * @str: str is a string
 * Return: void
 */

void _puts(char *str)
{
J = 0;
while (str[J] != '\0')
{
_putchar (J);
J++;
}
_putchar ('\n');
}
