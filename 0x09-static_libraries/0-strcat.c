#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src
 * null byte,to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0, len2 = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len2] != '\0')
		len2++;
			for (i = 0; i < len2; i++)
			{
				dest[len + i] = src[i];
			}
	return (dest);
}
