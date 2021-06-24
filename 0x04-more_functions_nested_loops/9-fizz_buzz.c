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
if ((i % 3) == 0 && (i % 5) == 0)
printf("FizzBuzz");

else if ((i % 3) == 0)
printf("Fizz");

else if ((i % 5) == 0)
printf("Buzz");

else
printf("%d", i);

if (num == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
