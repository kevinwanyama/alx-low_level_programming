#include "main.h"
/**
 * puts_have - print second half of a string
 * @str: char array string type
 * Description: If odd number of a chars, print (length - 1) / 2
 */
void put_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
