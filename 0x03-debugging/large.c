#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int main(void)
{
    int largest, a, b, c;
	scanf("%i",&a);scanf("%i",&b);scanf("%i",&c);
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
	printf("The largest number is %i \n",largest);
    return (0);
}
