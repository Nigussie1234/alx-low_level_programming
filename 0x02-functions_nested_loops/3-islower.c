#include "holberton.h"
/**
*_islower - checks if c is a lowercase
*@c is going to be checked
*
*Return: 1 if success
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return  (0);
}
}
