#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - The main function of my code
 * Return: 0 if code runs properly
 */
void positive_or_negative(int n)
{
srand(time(0));
if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is zero\n", n);
}
return;
}
int main(void)
{
int i;

i = 0;
positive_or_negative(i);

return (0);
}  
