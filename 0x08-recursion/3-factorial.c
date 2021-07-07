#include "holberton.h"
/**
 *factorial - returns factorial of a given number
 *@n: integer
 *
 *Return: factorial of n or -1
 */

int factorial(int n)
{
if (n > 0)
{
  return (factorial(n * (n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
