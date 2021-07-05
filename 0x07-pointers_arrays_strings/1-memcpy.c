#include "holberton.h"
/**
* _memcpy - function copies n bytes from memory area src to memory area dest
* Returns a pointer to dest
* @dest: A pointer to the memory area to be filled.
* @src: A pointer to copy or fill the memory area dest
* @n: The number of bytes to be filled or copied
*
* Return: A pointer to the filled memory area @s.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
