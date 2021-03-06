#include "holberton.h"
/**
* read_textfile - reads a text file and prints it to POSIX standard output
* @filename: name of file
* @letters: number of letters to read and print
*
* Return: actual number of letters read and printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_, write_;
	char *buf = malloc(sizeof(char) * letters);

	if (!buf | !filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	read_ = read(fd, buf, letters);
	if (read_ == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	write_ = write(STDOUT_FILENO, buf, read_);
	if ((write_ == -1) || (read_ != write_))
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (read_);
}
