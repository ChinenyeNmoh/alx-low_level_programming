#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *str;

	if (s1 == (NULL))
		s1 = "";
	if (s2 == (NULL))
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n > len2)
		n = len2;
	str = malloc((len1 + n + 1) * sizeof(char));
	if (str == (NULL))
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len1 + i] = '\0';
	return (str);
}
