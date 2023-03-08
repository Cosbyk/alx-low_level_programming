#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Reurn the natural square root of number
 * @n: number to calculate the natural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - Computes the square root of a number
 * @n: The number to compute the square root of
 * @i: iterate number
 * Return: the natural square root of n
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
