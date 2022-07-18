#include <stdio.h>
#include <string.h>
int main(void)
{
char *c;
char a = 'l';
int length = 0;
c = "Hello"; 
while(c[length])
{
length++;
}
printf("%i", length);
}
