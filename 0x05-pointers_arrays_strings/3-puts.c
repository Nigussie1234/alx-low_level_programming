#include "holberton.h"

/**
 * _puts - prints a string
 * @str: str is a string
 * Return: void
 */

void _puts(char *str)
{
str = 0;
while (*str != '\0')
{
_putchar (*str);
str++;
}
}
