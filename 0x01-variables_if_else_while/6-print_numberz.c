#include <stdio.h>
/**
*main - displays all single digit numbers
*
*Description: displays only numbers from 0 to 9
*
*Return: 0 (success)
*/
int main(void)
{
int i;
i = 48;
while (i < 58)
{
putchar (i);
i++;
}
putchar (10);
return (0);
}
