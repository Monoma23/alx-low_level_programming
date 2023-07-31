#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the 2D array representing the chess
 */
void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++)
{
for (int k = 0; k < 8; k++)
{
printf("%c ", a[i][k]);
}
printf("\n");
}
}


