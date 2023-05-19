/**
 * main - Entry point
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
	int n = 0;

	while (n <= 9 && n >= 0)
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
