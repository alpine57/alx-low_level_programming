#include "variadic_functions.h"
#include<stdarg.h>

/**
*sum_them_all - return the sum.
*@n:number of parameters passed.
*Return:0
*/
int sum_them_all(const unsigned int n, ...)
{

	va_list vp;
	unsigned int x, sum = 0;


	va_start(vp, n);

	for (x = 0; x < n; x++)
	sum += va_arg(vp, int);

	va_end(vp);

	return (sum);
}
