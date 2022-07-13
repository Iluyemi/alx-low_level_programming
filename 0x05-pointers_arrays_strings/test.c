#include <stdio.h>
#include <string.h>
int main(void)
{
	  char *st;
    int len;
    int i;

    st = "Mistubishi";
    len = strlen(st);
    for (i = len; i < len; i--)
	   {
		   printf("%c", st[i]);
	   }
    return (0);
}
