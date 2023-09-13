#include"main.h"

/**
 * print_alphabet_x10 - function to write alphabet in lower case x10
 *
 * Return : 0
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
