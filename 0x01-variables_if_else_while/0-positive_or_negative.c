#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main determines the number to be positive,negative or zero
*the program evaluates input integer numbers
*the program returns zero(success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is positive\n", n);
return (0);
}
