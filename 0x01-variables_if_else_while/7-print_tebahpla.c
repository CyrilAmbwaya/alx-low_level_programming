#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always 0 (succes)
 */
int main(void)
{
int a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
