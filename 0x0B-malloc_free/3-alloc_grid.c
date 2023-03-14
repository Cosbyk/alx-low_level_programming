#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2 Dim array of integers.
 * @width: The width of the 2 Dim array.
 * @height: The height of the 2 Dim array.
 *
 * Return: If width or height is 0 or negative, - NULL.
 */
int **alloc_grid(int width, int height)
{
int **gd;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

gd = malloc(sizeof(int *) * height);
if (gd == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
gd[i] = malloc(sizeof(int) * width);
if (gd[i] == NULL)
{
while (i--)
free(gd[i]);
free(gd);
return (NULL);
}

for (j = 0; j < width; j++)
gd[i][j] = 0;
}
return (gd);
}
