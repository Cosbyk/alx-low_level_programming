#include "main.h"

/**
 * set_bit - Sets the value of a bit
 * at a given index to 0
 *
 * @n: Pointer to the number to be changed
 * @index: Index of the bit to set
 *
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n |= (1UL << index);
return (1);
}
