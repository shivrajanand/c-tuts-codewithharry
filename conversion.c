// kms to miles// inches to foot// cm to inches// pound to kg// inches to metres

#include <stdio.h>
// ALL VARIABLE DECLARATION
int code;
float num;
int t = 0;
char exits;

// CLEAR FUNCTION
void clears()
{
    for (int i = 0; i < 20; i++)
    {
        printf("\n");
    }
}

// CONVERSION FUNCTION
void conversion()
{

    printf("Enter the code-schema as per stated\n");
    printf("km to miles :-->1\n");
    printf("inch to foot :-->2\n");
    printf("cm to inch :-->3\n");
    printf("pound to kg :-->4\n");
    printf("inch to metres :-->5\n");
    printf("Enter:");
    scanf("%d", &code);

    printf("\nEnter the numerical value for conversion:");
    scanf("%f", &num);
    printf("\n");

    if (code == 1)
    {
        printf("%f km is %f miles", num, num * 0.621371);
    }
    else if (code == 2)
    {
        printf("%f inch is %f foot", num, num * 0.083333);
    }
    else if (code == 3)
    {
        printf("%f cm is %f inch", num, num * 0.393701);
    }
    else if (code == 4)
    {
        printf("%f pound is %f kg", num, num * 0.453592);
    }
    else if (code == 5)
    {
        printf("%f inch is %f metres", num, num * 0.621371);
    }
    else
    {
        printf("Error: conversion method for %f not available.\n Please check the conversion schema\n", num);
    }
}

// MAIN <------------------------------------------------------------------>
int main(int argc, char const *argv[])
{
    // conversion(code, num);

    while (t == 0)
    {
        conversion();

        printf("\nWant to exit the program:[y]/n\n");
        scanf(" %c", &exits);
        if (exits == 'y')
        {
            printf("\n\n\n<------------------------------PROGRAM EXITED------------------------------>");
            break;
        }
        else
        {
            clears();
        }
    }

    return 0;
}
