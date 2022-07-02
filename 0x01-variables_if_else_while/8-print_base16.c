#include<stdio.h>
/**
 * main - the main function
 * Return: 0 return value if successful
 */
int main(void)
{
char CH;
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
}
for (CH = 'a'; CH <= 'f'; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
~    
