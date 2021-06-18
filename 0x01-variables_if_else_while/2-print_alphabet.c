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
char alpha = 'a';
putchar("Alphabet in lowercase:\n");
while(alpha <= 'z')
{
putchar("%c ", alpha);
alpha++;
}
return (0);
}
