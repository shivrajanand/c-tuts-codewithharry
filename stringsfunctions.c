#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[] = "Hello";
    char str2[] = "World";
    char reversestring[20];
    // strcat(str1, str2);
    // puts(strcat(str1, str2));
    // printf("length of string-1 is %d\n", strlen(str1));
    // printf("length of string-2 is %d", strlen(str2));
    // printf("reversed string for Hello World is %s \n", str1);
    // puts(str1);
    // puts(strrev(str1));

    // strcpy(reversestring, strrev(str1));
    // puts(reversestring);
    printf( "%d",strcmp(str1, str2));
    return 0;

    // enter two user generated strings of name of friends and then concatinate them  by saying that str1 is a friend of str 2
}
