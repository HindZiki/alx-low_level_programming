#include "main.h"

/**
 * clear_bit - set a value of the given bit to zero 0 .
 * @n: pointer to a number to change .
 * @index: index of the bit to clear .
 *
 * Return: 1 for success , -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
