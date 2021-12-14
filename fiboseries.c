#include <stdio.h>
// Declaring all variable
int count;

// Fibonacci Function
int fibo(int num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return (fibo(num - 1) + fibo(num - 2));
    }
}

// main
int main(int argc, char const *argv[])
{
    printf("Enter how many member of the fibonacci series you want:\n");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        printf("%d, ", fibo(i));
        if (i == count)
        {
            printf("%d,......... ", fibo(i));
        }
    }
    return 0;
}
