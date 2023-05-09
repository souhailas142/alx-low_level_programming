#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: file name
 * @letters: letters
 * Return: nbr of bytes or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	int fd;
	ssize_t nb;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (!b)
		return (0);
	nb = read(fd, b, letters);
	nb = write(STDOUT_FILENO, b, nb);
	close(fd);
	return (nb);
}
