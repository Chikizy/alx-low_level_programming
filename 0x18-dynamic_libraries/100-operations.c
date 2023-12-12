#include "op.h"

/**
 * add - Adds two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - Modulo of two integers
 * @a: Integer input
 * @b: Integer input
 * Return: Result of the operation
*/

int mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("error");
	return (0);
}

/**
 * div - quotient of two numbers
 * @a: dividend
 * @b: divisor
 * Return: The quotient
 */

int div(int a, int b)
{
	if (b)
		return (a / b);
	printf("error");
	return (0);
}
