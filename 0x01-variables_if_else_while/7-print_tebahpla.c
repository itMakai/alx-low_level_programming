/**
 * main - Entry point
 * Return: Always 0 (success)
 */
#include<stdio.h>
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
