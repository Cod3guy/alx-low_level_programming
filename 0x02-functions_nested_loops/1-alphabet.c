#include "main.h"

/**
 * print_alphabet - program to print alphabet in lowercase
 *
 * Return: Always 0 Success
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
