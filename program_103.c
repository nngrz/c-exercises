#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_N 5

int size;
int numbers[MAX_N][MAX_N];
int sum = 0;

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Usage: not enough elements.");
        return 1;
    }

    // get size
    size = atoi(argv[1]);

    // vertical
    for (int i = 0; i < size; i++)
    {
        //horizontal
        for (int j = 0; j < size; j++)
        {
            numbers[i][j] = get_int("");
        }
    }

    for (int i = 0; i < size; i++)
    {
        sum = sum + numbers[i][i];
    }
    printf("%d\n", sum);
}