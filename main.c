#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *s;
	s = malloc(strlen(“Best School”););
    strcpy(s, "Best School");
	printf("%s", s);
}
