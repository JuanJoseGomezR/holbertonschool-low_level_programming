#include "holberton.h"
/**
  * _chessboard - print chessboard
  * @a: pointer
  * Return: nothing
  */
void print_chessboard(char (*a)[8])
{
int column, row;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
