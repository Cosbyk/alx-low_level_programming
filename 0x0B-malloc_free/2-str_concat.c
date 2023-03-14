#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings of any size
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

new_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
new_str[i] = s1[i];

j = 0;
while (s2[j])
{
new_str[i + j] = s2[j];
j++;
}
new_str[i + j] = '\0';
return (new_str);
}
