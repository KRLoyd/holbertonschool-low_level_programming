#include "holberton.h"

/**
 * print_chessboard - print chessboard based on char board[8][8] in main
 * @a: array to print
 **/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}