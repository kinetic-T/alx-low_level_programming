#include <stdio.h>

/**
 * _strcat - concatenates strings
 * @dest: destination str
 * @src: source str
 *
 * Return: returns a string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';

	return (dest);
}
