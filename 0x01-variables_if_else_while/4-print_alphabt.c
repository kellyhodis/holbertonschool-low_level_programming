#include <stdio.h>
/**
* main - Prints the alphabet in lowercase except for the letters q and e
* followed by a new line
*
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
