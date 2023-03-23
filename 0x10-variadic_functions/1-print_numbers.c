#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator b/w the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator == NULL)
		return;
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
			if (i != n - 1)
				printf("%s", separator);
		}
	printf("\n");
	va_end(list);
}
