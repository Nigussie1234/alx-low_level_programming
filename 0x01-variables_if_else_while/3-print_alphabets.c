#include <stdio.h>
/**
*main - uses to give both lowercase and uppercase letters
*
*Description: the program uses only getchar
*
*Return: 0 (success)
*/
int main(void)
{
int ch;
putchar (ch);
for (ch = 'A'; ch< = 'Z'; ch++)
putchar('\n');
for (ch = 'a'; ch <= 'z'; ch++)
putchar('\n');
return (0);
}