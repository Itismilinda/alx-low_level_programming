#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an 8x8 array of characters representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int row, col;

    for (row = 0; row < 8; row++)
    {
        for (col = 0; col < 8; col++)
        {
            putchar(a[row][col]);
        }
        putchar('\n');
    }
}

