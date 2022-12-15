#include "main.h"
#include <string.h>

/**
 * _strncpy - This Function copies a string from one variable to the other
 * @dest: destination
 * @src: Source string
 * @n: n
 *
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, lenDest;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (n < lenDest)
			dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
