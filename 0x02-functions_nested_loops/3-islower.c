#include "main.h"
/**
 * _islower - checks for lower case
 * @c: is char to be checked
 * Return: 1 if char is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
