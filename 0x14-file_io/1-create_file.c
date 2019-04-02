#include "holberton.h"
/**
* create_file - creates a file
* @filename: name of file to create
* @text_content: string to write to file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t write_ = 0;
	int fd, i;

	for (i = 0; text_content[i]; i++)
		;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		return (1);
	}
	write_ = write(fd, text_content, i);
	close(fd);
	if (write_ == -1)
		return (-1);
	return (1);
}
