#include <stdio.h>
/**
 * main - program to  that computes
 * and prints the sum of all the multiples
 *of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 *Return: 0 on success
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
