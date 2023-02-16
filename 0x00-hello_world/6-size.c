#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %lu byte(s)", (unsignedlong)sizeof(a));
printf("Size of a int: %lu byte(s)", (unsignedlong)sizeof(b));
printf("Size of a long int: %lu byte(s)", (unsignedlong)sizeof(c));
printf("Size of a long long int: %lu byte(s)", (unsignedlong)sizeof(d));
printf("Size of a float: %lu byte(s)", (unsignedlong) sizeof(e));
return (0);
}
