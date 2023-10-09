#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_number(const char *number)
{
    while (*number) {
        if (!isdigit(*number)) {
            return 0; // Not a valid number
        }
        number++;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
	{
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_valid_number(num1) || !is_valid_number(num2))
	{
        printf("Error\n");
        return 98;
    }

    int result = atoi(num1) * atoi(num2);
    printf("%d\n", result);

    return 0;
}

