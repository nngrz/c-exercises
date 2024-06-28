#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("Enter length: ");

    int sumActural = 0;
    int sumNutural = (((length + 1) + 1) * (length + 1)) / 2;

    for (int i = 0; i < length; i++)
    {
        int k = get_int("Enter number: ");

        sumActural = sumActural + k;
    }

    int missing = sumNutural - sumActural;

    printf("%d\n", missing);
}