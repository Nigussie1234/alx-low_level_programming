#include <stdio.h>
/**
*main - uses to give lowercase letters except q and e
*
*Description: the program uses only putchar
*
*Return: 0 (success)
*/
int main(void)
{
int i = 97;
while (i < 123)
{
if (i != 101 && i != 113)
{
putchar (i);
}
i++;
}
putchar (10);
return (0);
}
