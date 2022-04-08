#include <stdio.h>

/**print possib;le combinatio of single dgt
 * return zero success
 */
int main(void)
{
	int n;

	for (n =48; n< 58; n++)
	{
	       	putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return(0);
}
