#include "main.h"
/**
 * _isalpha - checks for  alphabetic character
 * @c: the char to be checked
 * Return :1 if c is aletter.o therwise
 * Returns: 1 if c is a letter, lowercase or uppercase
 * Returns: 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
