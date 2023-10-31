#include <stdio.h>

/**
 *_strncat- concatenates a specified number of strings to a another string.
 *@dest: destination string
 *@src: string to concatenate to dest
 *@n: number of bytes of string to concatenate
 *Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n);

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i, j = 0;

	for (len1 = 0; dest[len1] != '\0' ; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
		;
	for (i = len1 ; i < (len1 + n) && src[j] != '\0' ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[len1 + n] = '\0';
	return (dest);
}
