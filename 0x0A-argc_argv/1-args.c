#include <stdio.h>
/**
 * main - my main function
 * @argc: argument count
 * @argv: argument vector
 * Return: if successful, and 1 if not
 */
int main(int argc, char *argv[])
{
int i = 1;
argc -= i;
printf("%d\n", argc);
return (0);
}
