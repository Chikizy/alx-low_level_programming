#include <stdio.h>
#include <stdlib.h>

/**
 *main-multiplies two no.s
 *@argc:counter
 *@argv:vector
 *Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc > 2 && argc < 4)
	{
		for (i = 1 ; i < argc ; i++)
			product = product * atoi(argv[i]);
	printf("%d\n", product);
	return (0);
	}
	else
	{
		printf("Error\n");
	return (1);
	}
}
