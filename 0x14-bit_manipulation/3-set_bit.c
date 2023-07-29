#include "main.h"
/**
 * set_bit - sets bit to a number.
 *index: no to search for
 *@n: pointer to  number to be  changed.
 * Return: 1 for success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
