#include "main.h"

/**
*_isdigit - function to check for digits 0-9
*@c: parameter to check
*Return: 1 on success and 0 on fail
*/

int _isdigit(int c)
{
	if (c >= 0 && c <=  9)
		return (1);
	else
		return (0);
}
