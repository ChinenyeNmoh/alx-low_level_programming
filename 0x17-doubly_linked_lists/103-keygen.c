#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f4(char *username, int length)
{
	int max_num;
	int current_num;
	unsigned int rand_num;

	max_num = *username;

	for (int i = 0; i < length; i++) {
		current_num = username[i];
		if (current_num > max_num)
			max_num = current_num;
	}

	srand(max_num ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

int f5(char *username, int length)
{
	int multiplied_char = 0;

	for (int i = 0; i < length; i++) {
		multiplied_char += username[i] * username[i];
	}

	return (((unsigned int)multiplied_char ^ 239) & 63);
}

int f6(char *username)
{
	int random_char = 0;

	for (int i = 0; i < *username; i++) {
		random_char = rand();
	}

	return (((unsigned int)random_char ^ 229) & 63);
}

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
		ch *= argv[1][vch];
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

