#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - detects last digit stored
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
printf("Last digit of %d id %d", n, a);
if (a > 5)	
printf("%d and is greater than 5\n", a);
else if (a == 0)
printf("%d and is 0\n", a);
else if (a < 6  && a != 0)
printf("%d and is less than 6 and not 0\n", a);

return (0);
}
