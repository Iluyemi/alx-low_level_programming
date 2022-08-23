#include "main.h"
#include <unistd.h>
/**
 * read_textfile - function
 * @filename: name of the file to be read
 * @letters: number of letters to read
 * Return: number of printed characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i = 0;
	char *buf;

	buf = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY, 0600);
	if (filename == NULL)
		return (0);
	read(fd, buf, letters);
	i += write(STDOUT_FILENO, buf, letters);
	if (i == -1)
		return (0);
	close(fd);
	free(buf);
	return (i);
}


