#include<stdio.h>
/**
 * main - the main function
 * Return: 0 return value if successful
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar((i % 10) + '0');
if (i <= 8)
{
putchar(',');
putchar(' ');
}
}
return (0);
}    
