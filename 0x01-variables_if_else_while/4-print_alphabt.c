#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
