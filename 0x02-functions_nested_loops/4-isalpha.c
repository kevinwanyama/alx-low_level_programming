#include "main.h"
/**
 * _isalpha - checks for  alphabetic character
 * @c: the char to be checked
 * return value of '_isalpha'
 * Return: 1 if c is a letter, lowercase or uppercase
 * Returns: 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
