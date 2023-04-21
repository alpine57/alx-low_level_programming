#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
*print_strings - prints string.
*@separator:the string to be printed.
*@n: ssrings passed to separator.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
	str = va_arg(strings,char*);

	if (str == NULL)
	printf("(nil)");

	else 
	printf("%s", str);

	if (index != (n - 1)&& separator != NULL)
	printf("%S", separator);

	}

	printf("\n");

	va_end(strings);
}
#include "variadic_functions.h"
  2 #include<stdio.h>
  3 #include<stdarg.h>
  4 
  5 /**
  6 *print_strings - prints string.
  7 *@separator:the string to be printed.
  8 *@n: ssrings passed to separator.
  9 */
 10 void print_numbers(const char *separator, const unsigned int n, ...)
 11 {
 12         va_list strings;
 13         char *str;
 14         unsigned int index;
 15 
 16         va_start(strings, n);
 17 
 18         for (index = 0; index < n; index++)
 19         {
 20         str = va_arg(strings,char*);
 21 
 22         if (str == NULL)
 23         printf("(nil)");
 24 
 25         else
 26         printf("%s", str);
 27 
 28         if (index != (n - 1)&& separator != NULL)
 29         printf("%S", separator);
 30 
 31         }
 32 
 33         printf("\n");
 34 
 35         va_end(strings);
 36 }
