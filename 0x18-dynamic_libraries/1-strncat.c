#include "main.h"

/**
 * _strncat - Concatenates two strings with n bytes
 * @dest: the string to be appended.
 * @src: the string to be appended to dest
 * @n: number of bytes from src to be appended
 * to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
