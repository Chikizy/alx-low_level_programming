#include <stdio.h>

/**
 * main - prints the arguments passed to it
 * @argc: counter
 * @argv: vector
 *
 * Description: -
 * Return: -
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
