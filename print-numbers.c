#include <stdio.h>

/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * ASCII value of 0=48
 * putchar() is used to print only characters,
 * When one numeric value is passed, we have to add
 * character ‘0’ with it to get the ASCII form
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		if (c < 9)
			putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
