#include "main.h"
/**
*_isupper - function to check for upper case
*@c: function parameter
*Return: 0 on fail and 1 on pass
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
