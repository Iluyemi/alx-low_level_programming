include<stdio.h>
#include "main.h"
/**
 * print_alphabet - print letters
 * Return: 0 return value if successful
 */
void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
printf("%c", alpha);
}
return (0);
}
/**
 * main - the main function
 * Return: 0 return value
 */
int main(void)
{
print_alphabet();
return (0);
}
