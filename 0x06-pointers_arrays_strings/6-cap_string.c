#include <stdio.h>

/**
 * cap_string - changes capitalise first letter of word
 * @c: char to be changed
 *
 * Return: returns uppercase char
 */

char *cap_string(char *c)
{
	int i, l, j;
	/* created a string of separators */
	char *sep = " \t\n,;.!?\"(){}";

	/* get length of sep */
	int k, sep_len;

	for (k = 0; sep[k] != '\0'; k++)
		sep_len++;

	/* loop through c */
	i = 0;
	while (c[i] != '\0')
	{
		/* loop through sep to determine a word separator */
		j = 0;
		while (j < sep_len)
		{
			if (sep[j] == c[i])
			{
				/* if found convert to uppercase */
				l = 0;
				while (l < 26)
				{
					if (c[i + 1] == ('a' + l))
						c[i + 1] = 'A' + l;
					l++;
				}
			}
			j++;
		}
		i++;
	}
	return (c);
}
