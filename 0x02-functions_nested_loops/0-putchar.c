#include "main.h"

/**
 * main - Prints _putchar, followed by a new line.
 * return: 0
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		_putchar(c);
		i++;
	}
return (0);
}
