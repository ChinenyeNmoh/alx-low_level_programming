#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * f4 - finds the biggest number
 *
 * @username: username
 * @length: length of username
 * Return: the biggest number
 */

int f4(char *username, int length)
{
	int max_val;
	int val;
	unsigned int random_num;

	max_val = *username;
	val = 0;

	while (val < length)
	{
		if (max_val < username[val])
			max_val = username[val];
		val += 1;
	}

	srand(max_val ^ 14);
	random_num = rand();

	return (random_num & 63);
}
/**
 * f5 - multiplies each char of username
 *
 * @username: username
 * @length: length of username
 * Return: multiplied char
 */
int f5(char *username, int length)
{
	int multiplied_val = 0;
	int val = 0;

	while (val < length)
	{
		multiplied_val = multiplied_val + username[val] * username[val];
		val += 1;
	}

	return (((unsigned int)multiplied_val ^ 239) & 63);
}
/**
 * f6 - generates a random char
 *
 * @username: username
 * Return: a random char
 */
int f6(char *username)
{
	int random_val = 0;
	int val = 0;

	while (val < *username)
	{
		random_val = rand();
		val += 1;
	}

	return (((unsigned int)random_val ^ 229) & 63);
}
/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, ch, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850
	};

	(void)argc;

	for (length = 0; argv[1][length]; length++)
		;

	keygen[0] = ((char *)alph)[(length ^ 59) & 63];

	ch = vch = 0;
	while (vch < length)
	{
		ch += argv[1][vch];
		vch++;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];

	ch = 1;
	vch = 0;
	while (vch < length)
	{
		ch = argv[1][vch] * ch;
		vch++;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];

	keygen[3] = ((char *)alph)[f4(argv[1], length)];
	keygen[4] = ((char *)alph)[f5(argv[1], length)];
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';

	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);

	return 0;
}

