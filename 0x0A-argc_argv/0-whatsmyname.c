#include <stdio.h>
/**
 *main - program prints the name of the program
 *@argc:counter
 *@argv:vector
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", argv[0]);
	}
	return (0);
}
