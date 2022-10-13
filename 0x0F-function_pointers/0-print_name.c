#include "function_pointers.hi"
#include <stddef.h>
/**
 * print_name - prints name using pointer to the function
 * @name: string to be add
 * @f: pointer to the function
 * Return: 0
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}i
