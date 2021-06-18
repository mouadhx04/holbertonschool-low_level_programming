#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if ( x > 5 )
printf("Last digit of %c is %x and is greater than 5\n", n, i);
else if (x < 6 && x != 0)
printf("Last digit of %c is %x and is less than 6 and not 0\n", n, i);
else if (x == 0)
printf("Last digit of %c is %x and is 0\n", n,i);
return (0);
}
