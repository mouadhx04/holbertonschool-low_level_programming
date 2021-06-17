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
float floatType;
double doubleType;
double double doublexType;
float floatType;

printf("size of a char:", sizeof(charType));
printf("Size of a int:", sizeof(intType));
printf("size of a long int:", sizeof(doubleType));
printf("size of a long long int:", sizeof(doublexType));
printf("size of a float:", sizeof(floatType));
return (0);
}
