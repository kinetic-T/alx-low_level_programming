#include "main.h"

/**
 * _strcpy - performs strcpy
 * @dest: dest buffer
 * @src: src string
 *
 * Return: returns strings
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
