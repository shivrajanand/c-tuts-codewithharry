#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int a = 34;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra + 1);
    // return 0;
printf("\n");
    //definig the array
    int arr[10];

    //defining the array
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    //priting the array
    printf("This is the array after its intialization and defining\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    //defining the pointer
    int *ptr = arr;

    //printing the address of the array elements
    printf("This is the address of array elements\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", (ptr + i));
    }
    printf("\n");
    //.............................................................
    printf("\n This is iteration via indexing\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    printf("\n This is iteration via dereferencing the pointer\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", *(ptr + i));
    }
    printf("\n");

    printf("%d", *arr);
    return 0;
}
