#include <stdio.h>

/**
 * main - entry point
 * Description: using putchar to print chars
 * Return: always 0
 */

int main(void)
{
	int l;

	l = 0;
	while (l < 26)
	{
		if ('a' + l == 'e' || 'a' + l == 'q')
			l++;
		else
		{
			putchar('a' + l);
			l++;
		}
	}

	putchar ('\n');

	return (0);
}
