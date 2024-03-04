#include "main.h"
#include <stdio.h>

/**
 *error_file- checks for error in reading or opening a file
 *@file_from: file to copy from
 *@file_to: file to copy to
 *@argv: array of pointers to argument vectors
 *Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s/n", argv[2]);
		exit(99);
	}
}

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 on success
 *
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_file;
	ssize_t bytesrd, byteswr;
	char *buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	bytesrd = 1024;
	while (bytesrd == 1024)
	{
		bytesrd = read(file_from, buf, 1024);
		if (bytesrd == -1)
			error_file(-1, 0, argv);
		byteswr = write(file_to, buf, bytesrd);
		if (byteswr == -1)
			error_file(0, -1, argv);
	}

	close_file = close(file_from);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", file_from);
		exit(100);
	close_file = close(file_to);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", file_to);
		exit(100);
}
