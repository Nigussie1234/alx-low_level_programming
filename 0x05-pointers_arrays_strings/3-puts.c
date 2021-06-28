#include "holberton.h"

/**
 * _puts - prints a string
 * @str: str is a string
 * Return: void
 */

void _puts(char *str)
{
int J = 0;
while (str[J] != '\0')
{
_putchar (str[J]);
J++;
}
_putchar ('\n');
}
