#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random pwd to crack 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int pwd[64], i, n, sum = 0;

	srand(time(NULL));
	i = 0;
	while (i < 64)
	{
		pwd[i] = rand() % 78;
		sum += pwd[i] + '0';
		putchar(pwd[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
		i++;
	}
	return (0);
}
