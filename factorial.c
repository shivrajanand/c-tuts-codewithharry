#include <stdio.h>

int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    else {
        return (num*factorial(num-1));
    }
}


int main(int argc, char const *argv[])
{
    int a;
    int f;
    printf("Enter number of which factorial is required\n");
    scanf("%d", &a);
    f = factorial(a);
    printf("factorial of %d is %d",a ,f);
    return 0;
}
