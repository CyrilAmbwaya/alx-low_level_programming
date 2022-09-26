#include "main.h"

/**
* *_strchr - locate a character in a string
*
* @s: string to search
* @c: char to find
*
* Return: a pointer
*/

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
			return (0);
		s++;
	}
}
