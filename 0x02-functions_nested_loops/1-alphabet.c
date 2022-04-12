#include "main.h"
/**
 * print_alphabet - prints alphabet
 * prints_alphabet - print the  alphabet, in lowercase,
 * followeed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	
	while(ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
