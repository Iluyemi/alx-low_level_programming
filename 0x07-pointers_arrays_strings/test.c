#include <stdio.h>
#include <string.h>
int main(void)
{
char *c;
char a = 'l';
c = "Hello"; 
char *f;
f = strchr(c, a);
printf ("%s", f);
}
