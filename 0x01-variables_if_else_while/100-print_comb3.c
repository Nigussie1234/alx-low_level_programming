#include <stdio.h>
/**
*main - print combination of single  digit  numbers
*
*Description: print combination of single digit numbers
*
*Return: 0 (success)
*/
int main(void)
{
int i;
int j;
i = 48;
for (j = 48; j <= 57; j++)
{
i = j + 1;

while (i <= 57)
{
putchar(i);
if (i < 57 || j < 56)
{
putchar(44);
putchar(32);
}
i++;
}
}
putchar(10);
return (0);
}
