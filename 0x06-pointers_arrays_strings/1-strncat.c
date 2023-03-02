#include "main.h"

/**
 * _strcat - Concatenates two strings using
 * an inputted number of bytes from src.
 * @dest: the string to be appended.
 * @src: the string to be appended to dest
 * @n: number of bytes from src to be appended
 * to dest
 * Return: A pointer to the resulting string dest
 */

char *_strcat(cahr *dest, char *src, int n)

{

int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);

}
