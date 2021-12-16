#include <stdio.h>

void printstring(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main(int argc, char const *argv[])
{
    // char name1[]="shivraj";
    // char name2[]={'s', 'h', 'i', 'v', 'r', 'a', 'j', '\0'};
    // printf("This is name 1 \n");
    // printstring(name1);
    // printf("\n This is name 2\n");
    // printstring(name2);

    char username[36];
    gets(username);
    printf("%s", username);
    puts(username);
    return 0;
}
