#include <stdio.h>
/**
*main - prints combination of single digit numbers
*
*Description: prints the combination of  single digit numbers
*
Return: 0 (success)
*/
int main(void)
{
int j, i;
i = 48;
j = 48;
while (i <= 57)
{
j = 48;
while (j <= 57)
{
putchar (i);
putchar (j);
if (i < 57 || j < 57)
{
putchar (44);
putchar (32);
}
j++;
}
i++;
}
putchar (10);
return (0);
}
