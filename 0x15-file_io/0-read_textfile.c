#include "main.h"

/**
 * read_textfile - reads a text file and prints the letter
 * @filename: filename
 * @letters: number of letters printed
 * Return: number of letters printed, if it fails return 0,
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t nread, nwrite;

	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	nread = read(fd, buf, letters);
	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);

	free(buf);

	return (nwrite);
}
