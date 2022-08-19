#include "main.h"
/**
 * binary_to_uint - converting from binary to decimal
 * @b: input string
 * Return: Decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	int sum = 0;
	int decimal = 1;
	
	j = strlen(b);
	if (b == NULL)
	{
		return (0);
	}
	for (i = (j - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum += decimal;
		decimal *= 2;
	}
	return ((unsigned int)sum);
}

