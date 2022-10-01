#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	const target[] = "cifs";

	va_start (ap, format);
	while (format && format[i])
	{
		while (target[j])
		{
	switch (format[i])
	case 'c': printf("%c", va_arg(ap, int));
		  break;
	case 'i': printf("%i", va_arg(ap, int));
		  break;
	case 'f': print("%f", va_arg(ap, double));
		  break;
	case 's': s = va_arg(arg, char);
		  if (s = NULL)
		  {
		printf("(nil)");
		break;
		  }
		  printf(%s, s);
		break;
	}i++;
printf("\n");
va_end(ap);
}
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
