#include"main.h"
#include<unistd.h>
/**
*putchar- writes character to stdout
*return 0 on success
*/

int _putchar(char c)
{
	return(write(1,&c,1));
}
