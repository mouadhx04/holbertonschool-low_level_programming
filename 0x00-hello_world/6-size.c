#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
double doubleType;
long double doublexType;
float floatType;

printf("size of a char:%zu byte\n", sizeof(charType));
printf("Size of a int:%zu byte\n", sizeof(intType));
printf("size of a long int:%zu byte\n", sizeof(doubleType));
printf("size of a long long int:%zu byte\n", sizeof(doublexType));
printf("size of a float:%zu byte\n", sizeof(floatType));
return (0);
}
