#include "variadic_functions.h"
#include <stdlib.h>
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
if (n == 0)
printf("\n");
return;
char *stg;
va_start(args, n);
for (i = 0; i < n; i++)
{

stg = va_arg(args,char *);
if (stg == NULL)
printf("nil");
if (i != n - 1)
{
if (separator == NULL)
printf("%s", stg);
else
printf("%s%s", stg,separator);
}
else
printf("%s\n", stg);
       
}
va_end(args);
}
