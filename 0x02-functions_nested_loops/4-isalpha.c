#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character
 * @c: char to be checked
 * Return: 1 if c is a letter, lowercase or uppercase, else 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
	return (1);
else
	return (0);
}
