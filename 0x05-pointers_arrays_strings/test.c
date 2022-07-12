#include <stdio.h>
int main(void)
{
	  char *st;
    int len;

    st = "M";
    len = *st;
    printf ("%ld", sizeof(&st));
    return (0);
}
