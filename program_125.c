#include <cs50.h>
#include <stdio.h>

int fibonacci(int k);

int main(void)
{
    int n = get_int("Enter position: ");

    int result = fibonacci(n);
    printf("%d\n", result);
    return 0;
}

int fibonacci(int k)
{
    if (k == 1)
    {
        return 0;
    }

    if (k == 2)
    {
        return 1;
    }

    return fibonacci(k - 2) + fibonacci(k - 1);
    
}
