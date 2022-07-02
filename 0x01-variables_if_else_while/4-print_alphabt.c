#include<stdio.h>
/**
 * main - the main function
 * Return: 0 if successful
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if(ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putcharc('\n');
return (0);
}
