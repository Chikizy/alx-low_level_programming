#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytesrd, byteswr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	bytesrd = read(fd, buf, letters);
	close(fd);
	if (bytesrd == -1)
	{		free(buf);
		return (0);
	}
	byteswr = write(STDOUT_FILENO, buf, bytesrd);
	free(buf);
	if (byteswr < bytesrd)
		return (0);
	return (byteswr);
}
