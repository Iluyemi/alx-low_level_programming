#include "main.h"
#include <string.h>
/**
 * puts_half - print half
 * @str: a character
 */
void puts_half(char *str)
{
int fir, mid, len;
fir = strlen(str);
if (fir % 2 == 1)
{
mid = fir / 2 + 1;
}
else
mid = fir / 2;
for (len = mid; len < fir; len++)
{
_putchar(str[len]);
}
_putchar('\n');
}
