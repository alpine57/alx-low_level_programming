#include "main.h"
/**
 * print_binary - print binary rep of a no
 * @n: number be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}

	putchar('0' + (n & 1));
}
