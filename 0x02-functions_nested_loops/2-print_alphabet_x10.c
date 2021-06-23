#include "holberton.h"

/**
 * print _alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int letter;
	int n = 0;

	while (n < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter += 1;
		}
		_putchar(10);
		n += 1;
	}
}
