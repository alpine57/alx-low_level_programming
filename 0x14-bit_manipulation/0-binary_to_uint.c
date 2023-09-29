#include "main.h"
/**
 *binary_to_uint - converts  binary  to an unsigned int
 *@b: string binary code
 *Return: converted no
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int output = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
		output =  ((2 * output) + (b[i] - '0'));
		}
		else
		{
		return (0);
		}

		i++;
	}

	return (output);
}
