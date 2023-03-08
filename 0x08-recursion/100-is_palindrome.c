#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: the length of string
 */
int _strlen_recursion(chat *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to compute the length of
 * @n1: The index of the first character in the string to compare
 * @n2: The index of the last character in the string to compare
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator(s, n1 + 1, m2 - 1));
}
return (0);
}
