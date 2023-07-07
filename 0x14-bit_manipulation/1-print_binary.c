#include "main.h"
/**
 * print_binary - print  binary equivalent of decimal number.
 * @n: numbers  to print in binary.
 */
void print_binary(unsigned long int n)
{
	int X, count = 0;
	unsigned long int current;

	for (X = 63; X >= 0; X--)
	{
	current = X >> X;
	if (current & 1)
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
