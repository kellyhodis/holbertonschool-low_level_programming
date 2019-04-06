#include "holberton.h"

int main(void)
{	
	printf("%d\n", setenv("TEST", "meaningless", 1));
	printf("%d\n", _setenv("TEST2", "meaningFUL", 1));
	printf("%s\n", getenv("TEST"));
	printf("%s\n", _getenv("TEST2"));
	return (0);
}
