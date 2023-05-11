#include "main.h"
/**
 * create_file - Create the  file
 * @filename: pointer to  name of  file to create
 * @text_content: pointer to  string to write to  file
 * Return: If  function fails -1
 */
int create_file(const char *filename, char *text_content)
{

	int xl, x, len = 0;

	if (filename == NULL)

	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	xl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	x = write(xl, text_content, len);

	if (xl == -1 || x == -1)
	return (-1);
	close(xl);
	return (1);

}
