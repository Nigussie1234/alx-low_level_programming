#include "holberton.h"
/**
 *_isdigit - checks for a digit (0 to 9)
 *@c: c is an ASCII character
 *
 *Return: 1 if c is uppercase & 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
