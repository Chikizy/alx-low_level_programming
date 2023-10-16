#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that prints string to the stdout with a separator
 *@separator: the separator
 *@n: number of values to print
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list joy;

	va_start(joy, n);

	for (i = 1 ; i <= n ; i++)
	{
	printf("%d", va_arg(joy, int));
	if (i < n && i != n)
	{
		printf("%s", separator);
	}
	if (separator == NULL)
		printf("(nil)");
	}
	va_end(joy);
}
