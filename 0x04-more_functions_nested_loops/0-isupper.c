#include <stdio.h>

/**
 * isupper - checks for uppercase letters
 *
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
