#include <stdio.h>
#include <stdlib.h>

/**
 *main-sums no.s
 *@argc:counter
 *@argv:vector
 *Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
	}
	else if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	else
		printf("Error\n");
	return (1);
}
