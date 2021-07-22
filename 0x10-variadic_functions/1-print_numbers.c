#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers -  a function that prints numbers
 *@separator:  is the string to be printed between numbers
 *@n: integer
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;

if (n == 0)
{
printf("\n");
return;
}

va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
if (separator == NULL)
{
if (i == n - 1)
printf("%d\n", num);
else
printf("%d", num);
}
else
{
if (i == n - 1)
printf("%d\n", num);
else
printf("%d%s", num, separator);
}
}
va_end(args);
}
