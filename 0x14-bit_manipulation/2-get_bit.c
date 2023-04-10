#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * at a specific index in a decimal number.
 *
 * @n: Decimal number to search
 * @index: Index of the bit to return
 * Returns: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{

int bit_value;

if (index > 63)

return (-1);

bit_value = (n >> index) & 1;

return (bit_value);

}
