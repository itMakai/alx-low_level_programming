#include <stdio.h>

/**
 *main - entry point
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int n = 0;

	while (10)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');

		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			break;
		}
		n++;
	}

	putchar('\n');

	return (0);
}
