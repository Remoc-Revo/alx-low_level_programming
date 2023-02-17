#include<stdio.h>
/**
 * main - prints lowercase alphabet in erverse
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
