#include <stdio.h>
#include "main.h"
/**
 * main - my main function
 * @argc: argument count
 * @argv: argument vector
 * Return: if successful, and 1 if not
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
int i = 1;
argc = argc - i;
printf("%d\n", argc);
return (0);
}
