#include"main.h"
/**
 * _isalpha - function that checks for alphabet
 * @c: character to check
 * Return: 1 if c is alpha otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
