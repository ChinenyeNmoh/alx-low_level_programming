#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	if (argc == 1)
	printf("0\n");
	for (i = 0; argv[i]; i++)
{
	if (argv[i] < '0' && argv[i] > '9')
	{
		printf("Error\n");
		return (1);
	}
	else
		sum += atoi(argv[i]);
}
	printf("%d\n", sum);
	return (0);
}
