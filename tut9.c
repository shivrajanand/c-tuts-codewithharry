#include <stdio.h>

int main(int argc, char const *argv[])
{
    float b = 5.884;

    printf("Value of b is: %.3f \n", b);
    printf("Value of b is: %.4f \n", b);
    printf("Value of b is: %1.4f \n", b);
    printf("Value of b is: %2.4f \n", b);
    printf("Value of b is: %3.4f \n", b);
    printf("Value of b is: %4.4f \n", b);
    printf("Value of b is: %8.4f \n", b);
    return 0;
}
