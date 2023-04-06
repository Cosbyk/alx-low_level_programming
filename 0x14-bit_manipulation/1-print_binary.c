#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number
 * @n: Input number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int top_num;
	int x;
	int count = 0;

	for (x = 63; x >= 0; x--)

	{
		top_num = n >> x;

		if (top_num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
