#include "main.h"

/**
*get_endianness - checks if  machine is big
*return :0 msuccess
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *)&x;


	return (*p);
}
