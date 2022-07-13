#include "main.h"
/**
 * rev_string - print in reverse
 * @s: a character
 */
void rev_string(char *s)
{
int c, c1, c2;
char tmp;
c1 = 0;
c2 = 0;
while (s[c1] != '\0')
c1++;
c2 = c1 - 1;
for (c  = 0; c < c1 / 2; c++)
{
tmp = s[c];
s[c] = s[c2];
s[c2] = tmp;
c2 -= 1;
}
}
