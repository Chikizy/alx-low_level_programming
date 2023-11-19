#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds integers after checking if they contain digits
 *@argc: counter
 *@argv:vector
 *Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	size_t j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	if (argv)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; j < strlen(argv[i]) ; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
