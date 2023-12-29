#include <stdio.h>

/**
 * main - entry point
 * Description: using putchar to print digits
 * Return: always 0
 */

int main(void)
{
	char n;

	n = '0';
	do {
		putchar (n);
		n++;
	} while (n <= '9');

	putchar ('\n');

	return (0);
}
