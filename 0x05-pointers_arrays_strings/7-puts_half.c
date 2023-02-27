#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int i = 0, len = 0, b;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		b = len / 2;

	else
		b = (len + 1) / 2;

	for (i = b; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

