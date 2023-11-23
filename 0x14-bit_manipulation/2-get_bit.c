#include "main.h"

/**
 * get_bit - return a value of a bit at the index in a decimal numbers. 
 * @n: number to the search .
 * @index: index of a bit .
 *
 * Return: values of the bit .
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
