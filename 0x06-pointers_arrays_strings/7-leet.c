#include <stdio.h>

/**
 * leet - string encoder
 * @c: character to encode
 *
 * Return: Returns encoded string
 */

char *leet(char *c)
{
	char lower_case[] = "aeotl";
	char upper_case[] = "AEOTL";
	char num[] = "43071";
	int i, j;

	/* loop through characters */
	for (i = 0; c[i] != '\0'; i++)
	{
		/* loop through the leetspeak array */
		for (j = 0; j < 5; j++)
		{
			if (c[i] == lower_case[j] || c[i] == upper_case[j])
				c[i] = num[j];
		}
	}
	c[i] = '\0';

	return (c);
}
