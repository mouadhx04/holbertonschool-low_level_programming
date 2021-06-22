#include "holberton.h"

/**
 * _islower - checks for lowercase character
 *
 * Returns 1 if c is lowercase
 *
 * Returns 0 otherwise
 */
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
