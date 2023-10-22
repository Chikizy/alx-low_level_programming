#include <stdio.h>

/**
 * main - function that reads in values of array and prints to output
 * Return: void
*/
int main(void)
{
	int i;
	int c[7];

	printf("enter the values of array: \n");

	for (i = 0 ; i < 7 ; i++)
	{
		scanf("%d\n", &c[i]);
	}
	for (i = 0 ; i < 7 ; i++)
	printf("the value in position \"%d\" of the array is :%d\n", i, c[i]);


	return (0);
}
