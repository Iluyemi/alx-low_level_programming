#include <stdlib.h>
#include <stdio.h>
int op_add(int a, int b)
{
	printf("%i", (a + b));
}
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int main (void)
{
char *d = "+";
int a = 3;
int b = 2;
struct op_t
{
char *s;
int(*get_op_function)(int a, int b);
};
struct op_t(char*s, int(*get_op_function)
struct op_t add.s = "+";
struct op_t  add.get_op_function = op_add;
if (d = op_t.s)
{
return(op_t.get_op_function);
}







