#include <stdio.h>

/**
 * main - entry point
 * Description: using putchar to print base 16
 * Return: always 0
 */

int main(void)
{
	char n;
	char l;

	n = '0';
	do {
		putchar (n);
		n++;
	} while (n <= '9');

	l = 'a';
	while (l <= 'f')
	{
		putchar (l);
		l++;
	}

	putchar ('\n');

	return (0);
}
