#include "main.h"
/**
*_islower - function
*
*Return: Get 1 if c is uppercase,
*get 0 if not
*
*@c: Evaluated character
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
