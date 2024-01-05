#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - concantenate wrt n bytes
 * @dest: dest pointer to str
 * @src: src pointer to str
 * @n: bytes of src to concatenate
 *
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	/* copy n bytes of src into dest */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	/* terminate with null */
	dest[dest_len] = '\0';

	return (dest);
}


