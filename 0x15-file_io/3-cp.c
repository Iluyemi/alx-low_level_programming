#include "main.h"
#include <unistd.h>
#include <string.h>



char *copy(char *file_from, char *file_to)
{
	int fd1;
	char *buf;

	if (!file_from)
	{
		exit (98);
		write(1, "Error: Can't read from file NAME_OF_THE_FILE", 5);
	}

	fd1 = open(file1, O_RDONLY);
	read(fd1, buf, n);

}

int main(int argc, char argv[])
{

}





