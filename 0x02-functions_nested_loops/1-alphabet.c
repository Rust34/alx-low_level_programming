#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch;

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
