#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - copy wrt n bytes
 * @dest: dest pointer to str
 * @src: src pointer to str
 * @n: bytes of src to concatenate
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	/* copy n bytes of src into dest */
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	/* terminate with null */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}


