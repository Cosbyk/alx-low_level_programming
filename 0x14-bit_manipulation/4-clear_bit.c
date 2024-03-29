#include "main.h"

/**
 * clear_bit - Sets the value of a bit to
 * 0 at a given index
 *
 * @n: Pointer to the number to change
 * @index: Index of the bit to set
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n &= ~(1UL << index);
return (1);
}
