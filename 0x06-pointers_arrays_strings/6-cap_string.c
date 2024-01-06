#include <stdio.h>

/**
 * cap_string - changes capitalise first letter of word
 * @c: char to be changed
 *
 * Return: returns uppercase char
 */

char *cap_string(char *c)
{
	int i, l;
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
		k = 0;
		while (sep[k] != '\0')
		{
			l = 0;
			while (l < 26)
			{
				if (i == 0 && c[i] == ('a' + l))
					c[i] = 'A' + l;
				else if (c[i] == sep[k])
				{
					if (c[i + 1] == ('a' + l))
						c[i + 1] = 'A' + l;
				}
				l++;
			}
			k++;
		}
		i++;
	}
	return (c);
}
