#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fp, retw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	text_content = "";

	while (text_content[len] != '\0')
		len++;

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	retw = write(fp, text_content, len);

	if (fp == -1 || retw == -1)
		return (-1);

	close(fp);

	return (1);
}
