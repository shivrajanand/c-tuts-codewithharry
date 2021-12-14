#include <stdio.h>
// int add(int num1, int num2);
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
        
    }
}

int main(int argc, char const *argv[])
{
    // int a = 12;
    // int b = 24;
    // int val = add(a, b);
    // printf("The sum is %d", val);
    // return 0;
    printstar(7);
}

// int add(int num1, int num2)
// {
//     int sum = num1 + num2;
//     return sum;
// };
