#include <stdio.h>
/**
*main - display lower case alphabets
*
*Description: only getchar is used twice
*Return: 0 (success)
*/
int main(void)
{
int ch;
for(ch= 'a'; ch<= 'z'; ch++)
putchar (ch);
putchar ('\n');
return (0);
}
