#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - print string length.
 * @str: string checked
 * Return: interger
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	char str[] = "Hello world";
	int d;

	d = _strlen(str);
	printf("%d\n", d);
	return (0);
}
