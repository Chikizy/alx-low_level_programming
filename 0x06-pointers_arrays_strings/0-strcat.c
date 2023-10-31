#include <stdio.h>

/**
 *_strcat- function concatenates two strings
 *@dest: first string
 *@src: string concatenated to first
 *Return: pointer to the updated string
 */

char *_strcat(char *dest, char *src);

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	for (len1 = 0; dest[len1] != '\0' ; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
		;
	for (i = len1 ; i <= (len1 + len2) - 1 ; i++)
		dest[i] = src[i - len1];
	dest[len1 + len2] = '\0';
	return (dest);
}
