#include <stdio.h>

/**
 *main - prints program name
 *@argc: takes arguement count
 *@argv: arguements passed
 *Return: return 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
