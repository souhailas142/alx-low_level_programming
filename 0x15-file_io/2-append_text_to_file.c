#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nl, rw;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		nl = 0;
		while (text_content[nl])
			nl++;
		rw = write(fd, text_content, nl);
		if (rw == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
