#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 **get_op_func - the function that selects the correct
 * function to perform the operation asked by the user
 *@s: the operator passed as argument to the program
 *
 *Return: pointer to the function 
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
for (i = 0; ops[i].op != NULL; i++)
{
if (*ops[i].op == *s && s[1] == '\0')
{
return (ops[i].f);
}
}
return (NULL);
}