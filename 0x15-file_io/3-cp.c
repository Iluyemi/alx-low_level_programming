#include "main.h"
#include <unistd.h>
#include <string.h>


int copy(char *file_from, char *file_to)
{
	int fd1, fd2, i, j;
	int n = 1024;
	ssize_t W, R = 1;
	char *buf;

	if (!file_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit (98);
	}
	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (R != 0)
	{
	buff  = malloc(n * sizeof(char));
	R = read(fd1, buf, n);
	W = write(fd2, buf, R);
	if (W == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit (99);
	}
	i = close (fd1);
	if (i == -1)
		write(2, "Error: can't close fd %i\n", fd1);			
	j = close (fd2);
	if (j == -1)
		write(2, "Error: Can't close fd %i\n", fd2);
	return (0);

}

int main(int argc, char argv[])
{
	   int res;

	       if (ac != 3)
	       {
		dprintf(2, "cp file_from file_to\n");
		exit(97);
	       }
	       res = copy(argv[1], argv[2]);
	       return (0);
}
