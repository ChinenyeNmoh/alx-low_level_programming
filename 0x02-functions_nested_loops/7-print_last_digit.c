#include "main.h"
/**
 * print_last_digit-prints the last digit of an interger.
 * @x:number to compute last digit.
 * Return:last digit.
 */



int print_last_digit(int x)
{
	int last_digit;

	last_digit = x %  10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);

}

