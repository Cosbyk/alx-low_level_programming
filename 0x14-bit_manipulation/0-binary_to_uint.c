#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Changes a binary number to an unsigned int
 * @b: String with the binary number
 * Return: The converted number as an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;
	unsigned int q;

	if (!b)
		return (0);

	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);
		conv_num = 2 * conv_num + (b[q] - '0');
	}

	return (conv_num);

}
