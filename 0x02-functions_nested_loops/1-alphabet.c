#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a anew line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= "z"; letter++)
		_putchar(letter);
	_putchar('\n');
}
