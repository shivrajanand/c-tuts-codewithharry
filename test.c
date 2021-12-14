#include <stdio.h>
typedef enum { F, T } bool;

void clears(){
    for (int j = 0; j <=20; j++)
    {
        printf("\n");
    }
}
int main(int argc, char const *argv[])
{   
    for (int i = 0; i < 2; i++)
    {
        printf("This is Statement 1\n");
        clears();
    }
}
    
    