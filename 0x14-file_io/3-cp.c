#include "holberton.h"
/**
* copy - copies one file to another
* @from: position in open file to copy from
* @to: position in open file to copy to
* @file_from: file to copy from
* @file_to: file to copy to
*
* Return: nothing
*/
void copy(int from, int to, char *file_from, char *file_to)
{
	char buffer[1024];
	int read_from = 1, write_to = 0;

	while (read_from > 0)
	{
		read_from = read(from, buffer, 1024);
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		write_to = write(to, buffer, read_from);
		if (write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
}
/**
* main - copies content of a file to another file
* @argc: argument count
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char **argv)
{

	int fd_from, fd_to, close_from, close_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy(fd_from, fd_to, argv[1], argv[2]);
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from);
		exit(100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_to);
		exit(100);
	}
	return (0);
}
