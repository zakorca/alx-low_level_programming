#include"main.h"
/**
 * _islower - function that checks for lower case character
 * @c: character to check
 * Return: 1 if c is lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
