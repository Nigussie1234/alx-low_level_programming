#include "holberton.h"
#include <stdio.h>
/**
 *main - prints the number of command line arguments, followed by a new line
 *@argc: argument count
 *@argv: argument vector
 *Description: prints its name, followed by a new line
 *
 *Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
int n;
n = argc - 1;
printf("%d\n", n);

return (0);
}
