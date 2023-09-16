#include "main.h"

/**
 * print_last_digit - last digit number
 * @n: the number to check
 * Return: value of last number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (n < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	_putchar('\n');
	return (ld);
}
