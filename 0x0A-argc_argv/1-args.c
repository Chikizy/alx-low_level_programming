#include <stdio.h>

/**
 *main- prints the number of arguments passed to the program
 *@argc:arg counter
 *@argv:arg vector
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
