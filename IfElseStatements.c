#include <stdio.h>

int main()
{   
    // declaring string
    // char str[50];
    // printf("This is If-Else statements tutorial\n");
    // printf("Are you Ready?\n");

    // // reading string
    // scanf("%s",str);
      
    // // print string
    // // printf("%s",str);
    
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have enterd %d as your age\n", age);

    if (age >= 18) {
        printf("You can vote!");   
    }
    else {
        printf("You are underage, you can't vote");
    }
    
    return 0;
}