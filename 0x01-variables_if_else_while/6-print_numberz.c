#include <stdio.h>
/**
 * main - main function of the code
 * Return: 0 if code is suceessful
 */
int main(void)
{
unsigned int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}
