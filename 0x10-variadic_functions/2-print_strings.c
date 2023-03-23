#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If seperator is NULL, it is not printed.
 * If one of the string is NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	if (separator == NULL)
	separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		if (s == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", s);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
