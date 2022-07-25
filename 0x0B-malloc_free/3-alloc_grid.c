#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - My Prototype function
 * @str: prototype array
 * Return: NULL if size = 0
 */
int **alloc_grid(int width, int height)
{
	int *i [][];
if (width == 0 || height == 0)
	return (NULL);
i = malloc(width * height * sizeof(int));
for (a = 0; a < height; a++)
{
	for (b = 0; b < width; b++)
	{
		i[a][b] = 0;
	}
}
return (0);
}
