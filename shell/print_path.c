#include "holberton.h"

int main(void)
{
	char *token;
	char *parse = NULL;

	parse = _getenv("PATH");
	token = strtok(parse, ":");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}

	return (0);


}
