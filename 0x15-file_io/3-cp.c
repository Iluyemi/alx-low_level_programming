#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
/**
 * copy - function
 * @file_from: input 1
 * @file_to: input 2
 * Return: 0
 */
int copy(char *file_from, char *file_to)
{
	int fd1, fd2, i, j;
	int n = 1024;
	ssize_t W, R = 1;
	char *buf;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while (R != 0)
	{
		buf  = malloc(n * sizeof(char));
		R = read(fd1, buf, n);
		W = write(fd2, buf, R);
		if (W == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	i = close(fd1);
	if (i == -1)
		dprintf(STDERR_FILENO, "Error: can't close fd %i\n", fd1);
		exit(100);
	j = close(fd2);
	if (j == -1)
		write(2, "Error: Can't close fd %i\n", fd2);
		exit(100);
	return (0);

}
/**
 * main - main function
 * @argc: Number of argument
 * @argv: input array
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy(argv[1], argv[2]);
	return (0);
}
