#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * folloeed by a new line
 * Return: Always 0
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 49; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld, ", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
