#include "variadic_functions.h"
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
va_list num;
unsigned int i;
if (separator == NULL)
separator = "";
va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d\n", va_arg(num, int));
if (n == i + 1)
{
break;
}
printf("%s\n", separator);
}
va_end(num);
}
