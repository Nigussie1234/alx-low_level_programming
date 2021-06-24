#include "hoberton.h"
/**
 *_isupper - checks for uppercase character
 *@c: c is an ASCII character
 *
 *Return: 1 if c is uppercase & 0 otherwise
 */
int _upper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
