#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0;
    int index = 0;
    char new_string[strlen(string)];

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        else
        {
        }

        if (in == 0)
        {
            new_string[index] = string[i];
            index++;
        }
    }
    new_string[index] = '\0';


    // Removing spaces

    while (new_string[0] == ' ')
    {
        for (int k = 0; k < strlen(new_string); k++)
        {
            new_string[k] = new_string[k+1];

        }
        
    }

    // Removing last spaces
    while (new_string[strlen(new_string)-1] == ' ')
    {
        new_string[strlen(new_string)-1] = '\0';
    }
    

    // printing final string
    printf("Parsed string is ~~%s~~", new_string);
}

int main(int argc, char const *argv[])
{
    char input_str[] = "<h1dfgdfhsgfdhsetdh>               This is a string       <fggrgarga/h1          >";
    parser(input_str);

    return 0;
}
