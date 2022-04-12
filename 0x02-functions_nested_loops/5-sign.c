#include "main.h"
 /**
  * print_sign:function that prints the sign of a number.function that prints the sign of a number.
  * print_sign - print the sign of a number
  * @n: the int to check
  * Return : 1 and prints + if n is greater than  zero
  * print 0 if n is zero
  * -1 and print - if n is less thrn zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

