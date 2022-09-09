#include <stdio.h>
/**
 * main - prints alphabet in lowercase.
(*
 * Return: 0 is success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
