#include <stdio.h>
/**
*main - prints all possible different combinations of three digits
*
*Description: prints all possible different combinations of three digits
*
*Return: void
*/

int main(void)
{
int i;
int j;
int k;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
putchar (i);
putchar (j);
putchar (k);
if (i != j && j != k && i != k)
{
putchar (44);
putchar (32);
}
}
}
}
putchar (10);
return (0);
}
