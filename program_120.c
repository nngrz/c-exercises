#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("Enter length: ");
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < length; i++)
    {
        int k = get_int("Enter number: ");

        sum = sum + k;

        if (sum < 0)
        {
            sum = 0;
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    printf("%d\n", maxSum);
}
/*
// practice with 3 variables
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter number a: ");

    int sum = a;
    int maxSum = 0;

    if (sum > maxSum)
    {
        maxSum = sum;
    }

    int b = get_int("Enter number b: ");
    if (sum < 0)
    {
        sum = 0;
    }

    sum = sum + b;

    if (sum > maxSum)
    {
        maxSum = sum;
    }

    int c = get_int("Enter number c: ");

    if (sum < 0)
    {
        sum = 0;
    }

    sum = sum + c;

    if (sum > maxSum)
    {
        maxSum = sum;
    }
    printf("%d\n", maxSum);
}
*/

/*
// practice with 2 variables
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter number a: ");
    int b = get_int("Enter number b: ");

    int sum = a + b;
    int maxSum = 0;

    if (a > sum && a > b)
    {
        maxSum = a;
    }
    else if (b > sum && b > a)
    {
        maxSum = b;
    }
    else
    {
        maxSum = sum;
    }
    printf("%d\n", maxSum);
}

*/

