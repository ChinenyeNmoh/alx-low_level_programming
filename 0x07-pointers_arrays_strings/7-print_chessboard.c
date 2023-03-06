#include "main.h"
/**
* print_chessboard - print chessboard given set 2D array
* @a: 2D array
*/

void print_chessboard(char (*a)[8])
{
	int lenght;
	int width;

	for (lenght = 0; lenght < 8; lenght++)
	{
		for (width = 0; width < 8; width++)
		_putchar(a[lenght][width]);
		_putchar('\n');
	}
}
