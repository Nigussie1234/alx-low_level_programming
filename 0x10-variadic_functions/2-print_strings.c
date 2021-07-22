#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - prints strings
 *@separator: the string to be printed between the strings
 *@n: number of strings
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *string;

if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
string = va_arg(args, char *);
if (string == NULL)
printf("(nil)");

if (i != n - 1)
{
if (separator == NULL)
printf("%s", string);
else
printf("%s%s", string, separator);
}
else
printf("%s\n", string);
}
va_end(args);
}
