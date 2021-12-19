#include <stdio.h>

int func1(int b1)
{
    static int staticvar = 50;
    int normvar = 50;
    printf("static int var = %d & normal int var = %d \n", staticvar, normvar);
    staticvar++;
    normvar++;
    return b1 + staticvar + normvar;
}

int main(int argc, char const *argv[])
{
    int b = 34;
    int sval = func1(b);
    sval = func1(b);
    sval = func1(b);
    sval = func1(b);
    sval = func1(b);
    return 0;
}
