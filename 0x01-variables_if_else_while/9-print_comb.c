#include <stdio.h>

/**
 * main - entry point
 * Description: prints all possible combinations of single
 * of single digit numbers
 * Return: always 0
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar ('0' + n);
		if (n < 9)
		{
			putchar (',');
			putchar (' ');
		}
		n++;
	}
	putchar ('\n');

	return (0);

}
