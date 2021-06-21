#include <stdio.h>
/**
*main - print lowercase  letters of hexadecimal
*
*Description: prints lowercase letters of hexadecimal
*
*Return: 0 (success)
*/
int main(void)
{
int j = 0;
while (j < 48)
{
if (j < 10)
putchar (j + '0');
else if (j > 41)
putchar (j - 10 + 'A');
j++;
}
putchar (10);
return (0);
}
