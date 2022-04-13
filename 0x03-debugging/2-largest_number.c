#include "main.h"
/**
 * large_number - return the largest of the 3 numbers
 * @a: first integer
 * @b: secod integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	
	return (largest);
}
