#include <stdio.h>

/**
 *binary_to_uint - converts binart to unsigned int
 *@b: binary digit to convert
 *Return: unsigned int
 */

unsigned int binary_to_uint(const char *b);

unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	int weight;
	int dec1;
	unsigned int dec2;

	weight = 1;
	dec1 = 0;
	dec2 = 0;

	if (!b)
		return (0);
	for (len = 0 ; b[len] != '\0' ; len++)
		;
	for (i = len - 1 ; i >= 0 ; i--)
	{
	if (b[i] == '0' || b[i] == '1')
	{
	dec1 = (b[i] - '0') * weight;
	dec2 = dec2 + dec1;
	weight = weight * 2;
	}
	else
		return (0);
	}
	return (dec2);
}
