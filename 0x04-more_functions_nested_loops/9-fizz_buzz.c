#include <stdio.h>
/**
 *main - Fizz-Buzz test on integer
 *Return: 0 (success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (((i % 3) || (i % 5)) == 0)
printf("number= %d FizzBuzz\n", i);
else if ((i % 3) == 0)
printf("number= %d Fizz\n", i);
else if ((i % 5) == 0)
printf("number= %d Buzz\n", i);
else
printf("number= %d\n", i);
}
return (0);
}
