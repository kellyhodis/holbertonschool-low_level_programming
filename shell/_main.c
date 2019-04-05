#include "holberton.h"

int main(void)
{	
	printf("%s\n", getenv("PATH"));
	printf("%s\n", _getenv("PATH"));
	return (0);
}
