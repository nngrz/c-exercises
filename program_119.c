#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("Enter length: ");

    int sumActual = 0;
    int totalSum = (((length + 1) + 1) * (length + 1)) / 2;

    for (int i = 0; i < length; i++)
    {
        int k = get_int("Enter number: ");

        sumActual = sumActual + k;
    }

    int missing = totalSum - sumActual;

    printf("%d\n", missing);
    
}