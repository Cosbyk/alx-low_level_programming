#include "main.h"

/**
 * get endianness - Checks for little or big enadian
 * Return: 0 if big endian, or 1 if little endian
 */

int get_endianness(void)
{

unsigned int x = 1;

char *y = (char *) &x;

return (*y);

}
