#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Enty point
 *
 * Return:always return 0
 *
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf ("%d  is negaitive\n", n);
else if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is Zero\n", n);
return (0);
}
