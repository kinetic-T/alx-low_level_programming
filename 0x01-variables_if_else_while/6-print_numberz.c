#include <stdio.h>

/**
 * main - entry point
 * Description: using putchar to print digits
 * Return: always 0
 */

int main(void)
{
	int n;

	n = 0;
	do {
		putchar ('0' + n);
		n++;
	} while (n < 10);

	putchar ('\n');

	return (0);
}
