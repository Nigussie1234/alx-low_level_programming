#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - prints a name
 *@name: a string
 *@f: function pointer
 *
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (f  == NULL)
{
return;
}
else
{
f(name);
}
}
