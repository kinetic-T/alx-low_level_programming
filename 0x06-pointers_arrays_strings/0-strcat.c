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
	int len, i;

	len = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	len--;
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
