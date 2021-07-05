#include "holberton.h"
/**
 *print_chessboard - prints the chessboard
 *
 *@a: pointer on a array of 8 size
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
