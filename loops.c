#include <stdio.h>

int main(int argc, char const *argv[])
{
    // while loop ________________________________________________________________________________________________
    printf("while loop\n");
    int i = 0;
    while (i <= 5)
    {
        printf("%d", i);
        i++;
    };

    // do-while loop ________________________________________________________________________________________________
    printf("\ndo-while loop\n");
    int j = 0;
    do
    {
        printf("%d", j);
        j++;
    } while (j <= 5);

    // for loop ________________________________________________________________________________________________
    printf("\nfor loop\n");
    for (int k = 0; k <= 5; k++)
    {
        printf("%d", k);
    };

    return 0;
}
