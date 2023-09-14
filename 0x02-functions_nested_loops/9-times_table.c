#include "main.h"
#include <stdio.h>

/**
 * times_table - function to print the 9 times table
 *beginning at 0'
 *Return: 0 on success
 */

void times_table(void)
{
	int r, c, prod;

	for (r = 0 ; r < 10 ; r++)
	{
		for (c = 0 ; c < 10 ; c++)
		{
			prod = r * c;
			if (c == 0)
				printf("%d, ", prod);
			else
			{
				printf("%2d", prod);
				if (c != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
