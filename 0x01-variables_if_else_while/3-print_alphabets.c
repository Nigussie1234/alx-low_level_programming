#include <stdio.h>
/**
*main - prints both uppercase and lowercase letters
*
*Description: prints both uppercase and lowercase letters
*
*Return: 0 (success)
*/
int main(void)
{
int j, i;
for (j = 97; j <= 122; j++)
{
putchar (j);
}
for (i = 65; i <= 90; i++)
{
putchar (i);
}
putchar (10);
return (0);
}
