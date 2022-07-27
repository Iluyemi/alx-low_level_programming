#include <stdio.h>
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i = 1;
	argc -= i;
	printf("%i\n", argc);
}
