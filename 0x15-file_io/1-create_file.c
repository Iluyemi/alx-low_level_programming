#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * create_file - file to be created
 * @filename: as the name suggest
 * @text_content: input
 * Return: 1 if successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		i = strlen(text_content);
	write(fd, text_content, i);
	close(fd);
	return (1);
}
