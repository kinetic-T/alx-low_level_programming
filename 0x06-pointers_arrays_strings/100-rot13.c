#include <stdio.h>

/**
 * rot13 - character encoding using rot13
 * @c: character to encode
 *
 * Return: Returns encoded string
 */

char *rot13(char *c)
{
	char l1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	/* loop through characters */
	for (i = 0; c[i] != '\0'; i++)
	{
		/* loop through the letters array */
		for (j = 0; l1[j] != '\0'; j++)
		{
			if (c[i] == l1[j])
			{
				c[i] = l2[j];
				break;
			}
		}
	}
	c[i] = '\0';

	return (c);
}
