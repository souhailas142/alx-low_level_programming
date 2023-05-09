#include "main.h"
/**
 * ferror - checks files error
 * @ff: file from
 * @ft: file to
 * @argv: list of arguments
 * Return: no return.
 */
void f_error(int ff, int ft, char *argv[])
{
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: SUCCESS
 */
int main(int argc, char *argv[])
{
	int ff, ft, cErr;
	ssize_t nchars, nw;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	f_error(ff, ft, argv);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(ff, b, 1024);
		if (nchars == -1)
			f_error(-1, 0, argv);
		nw = write(ft, b, nchars);
		if (nw == -1)
			f_error(0, -1, argv);
	}
	cErr = close(ff);
	if (cErr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	cErr = close(ft);
	if (cErr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	return (0);
}
