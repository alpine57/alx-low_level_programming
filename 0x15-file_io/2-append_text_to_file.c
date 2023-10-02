#include "main.h"

/**
* append_text_to_file - appends text at end of file
* @filename: file used
* @text_content: content be appended to the file
* Return: when successful return 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x, file_open, file_write;

	if (filename == NULL)
	{
	return (-1);
	}

	file_open = open(filename, O_WRONLY | O_APPEND);

	if (file_open == -1)
	{
	return (-1);
	}

	if (text_content != NULL)
	{

	for (x = 0; text_content[x]; x++);

	file_write = write(file_open, text_content, x);

	if (file_write == -1)
	{
	close(file_open);
	return (-1);
	}

	else
	{
	close(file_open);
	return (1);
	}
	}

	close(file_open);
	return (1);

}
