#include "main.h"
/**
 * get_bits - return  value of  bit at an index in decimal number.
 * @n: number to search for .
 * @index: index of the bits.
 * Return: value of  bits.
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int bit_val;

        if (index > 63)
                return (-1);
        bit_val = (n >> index) & 1;
        return (bit_val);
}
