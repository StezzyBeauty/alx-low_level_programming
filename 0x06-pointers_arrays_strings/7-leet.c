#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337
 * @s: the string
 *
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i, j, len;
	int letters[5] = {97, 101, 111, 116, 108};
	char num[5] = {'4', '3', '0', '7', '1'};

	len = strlen(s);

	for (i = 0; i <  len && s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
				s[i] = num[j];
		}
	}
	return (s);
}
