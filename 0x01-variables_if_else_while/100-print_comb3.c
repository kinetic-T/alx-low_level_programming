#include <stdio.h>

/**
 * main - entry point
 * Description: print to digit combo
 * Return: always 0
 */

int main(void)
{
	int n, first, second;

	n = 0;
	while (n < 100)
	{
		first = n / 10;
		second = n % 10;
		if (first < second)
		{
			putchar ('0' + first);
			putchar ('0' + second);
			if (first < 8)
			{
				putchar (',');
				putchar (' ');
			}
		}
		n++;
	}
	putchar ('\n');

	return (0);
}
