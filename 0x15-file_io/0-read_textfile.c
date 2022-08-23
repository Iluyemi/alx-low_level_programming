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
	ssize_t i, j;
	char *buf;

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (filename == NULL || fd == -1)
		return (0);
	j = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, j);
	if (i == -1)
		return (0);
	free(buf);
	close(fd);
	return (i);
}


