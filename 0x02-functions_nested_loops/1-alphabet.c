#include"main.h"

/**
 * print_alphabet - function to write alphabet in lower case
 *
 * Return : 0
 */
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
