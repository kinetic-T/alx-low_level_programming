#include <stdio.h>

/**
 * main - entry point
 * Description: using putchar to print chars
 * Return: always 0
 */

int main(void)
{
	int l;

	l = 25;
	do {
		putchar ('a' + l);
		l--;
	} while (l >= 0);

	putchar ('\n');

	return (0);
}
