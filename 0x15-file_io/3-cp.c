#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @ac: number of arguments
 * @av: list of arguments
 * Return: SUCCESS
 */
int main(int ac, char **av)
{
	int ff, ft, cErr;
	ssize_t nchars, nw;
	char b[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);
	ff = open(av[1], O_RDONLY);
	ft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (ff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (ft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(ff, b, 1024);
		if (nchars == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		nw = write(ft, b, nchars);
		if (nw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	cErr = close(ff);
	if (cErr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	cErr = close(ft);
	if (cErr == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	return (0);
}
