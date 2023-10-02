#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *@n: - parameter whose function is to be returned
 *
 * Return: - 0 on success or -1 on failure
 */

int factorial(int n)
{
	int b = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	b = n * factorial(n - 1);
		return (b);
}
