#include <stdio.h>
/*
Take input from user as 0 for triangular star pattern and 1 for reversed triangular star pattern
Take input from user for number of rows in the pattern

*/

void printstar(int num){
    for (int i = 0; i < num+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
void  printrstar(int num){
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int choice, num;

    printf("Type 0 for star patter & 1 for reverse star pattern\n");
    scanf("%d", &choice);

    printf("Enter number of stars to be printed in the base line\n");
    scanf("%d", &num);

    // printf("choice: %d, num:%d", choice, num);
    
    switch (choice)
    {
    case 0:
        printstar(num);
        break;

    case 1:
        printrstar(num);
        break;

    default:
        printf("You have entered an invalid choice. \nChoose from 0 or 1.");
        break;
    }
    return 0;


}
