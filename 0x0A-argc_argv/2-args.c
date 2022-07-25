#include <stdio.h>
#include "main.h"
/**
 * main - my main function
 * @argc: argument count
 * @argv: argument vector
 * Return: if successful, and 1 if not
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
