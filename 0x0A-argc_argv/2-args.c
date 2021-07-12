#include "holberton.h"
#include <stdio.h>
/**
 *main - prints its name, followed by a new line
 *@argc: argument count
 *@argv: argument vector
 *Description: prints its name, followed by a new line
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
printf("argv[%d]: %s\n", n, argv[n]);
}
return (0);
}
