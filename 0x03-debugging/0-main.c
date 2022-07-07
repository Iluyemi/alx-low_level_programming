#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
#include <stdio.h>
#include <time.h>                                          #include <stdlib.h>                                                                                                   /**
 * main - The main function of my code
 * Return: 0 if code runs properly
 */
int positive_or_negative(int n)
{
int n;
if (n < 0)                                                 {
printf("%i is negative\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}                                                          else
{
printf("%i is zero\n", n);
}                                                          return (0);
}
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
